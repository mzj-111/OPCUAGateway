/*
编译命令：gcc -Wall -o dht11 dht11.c -lwiringPi -lmariadb
*/
#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include "mariadb/mysql.h"
#include <string.h>
 
typedef unsigned char uint8;
typedef unsigned int  uint16;
typedef unsigned long uint32;
 
#define HIGH_TIME 32
 
int pinNumber = 7;
uint32 databuf;
// int idOfDht11 = 1;
char* hquery1 = "UPDATE dht11 SET rh= ";
char* hquery2 = "UPDATE dht11 SET tmp= ";
char* endQuery = " WHERE idofdht11= 1";
char query1[100];
char query2[100];
  
uint8 readSensorData(void)
{
    uint8 crc; 
    uint8 i;
  
    pinMode(pinNumber, OUTPUT); // set mode to output
    digitalWrite(pinNumber, 0); // output a high level 
    delay(25);
    digitalWrite(pinNumber, 1); // output a low level 
    pinMode(pinNumber, INPUT); // set mode to input
    pullUpDnControl(pinNumber, PUD_UP);
 
    delayMicroseconds(27);
    if (digitalRead(pinNumber) == 0) //SENSOR ANS
    {
        while (!digitalRead(pinNumber))
            ; //wait to high
 
        for (i = 0; i < 32; i++)
        {
            while (digitalRead(pinNumber))
                ; //data clock start
            while (!digitalRead(pinNumber))
                ; //data start
            delayMicroseconds(HIGH_TIME);
            databuf *= 2;
            if (digitalRead(pinNumber) == 1) //1
            {
                databuf++;
            }
        }
 
        for (i = 0; i < 8; i++)
        {
            while (digitalRead(pinNumber))
                ; //data clock start
            while (!digitalRead(pinNumber))
                ; //data start
            delayMicroseconds(HIGH_TIME);
            crc *= 2;  
            if (digitalRead(pinNumber) == 1) //1
            {
                crc++;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int saveData(MYSQL* con, float* rh, float* tmp){
    char rhs[6];
    char tmps[6];
    gcvt(*rh, 5, rhs);
    gcvt(*tmp, 5, tmps);
    strcat(query1, hquery1);
    strcat(query2, hquery2);
    strcat(query1, rhs);
    strcat(query2, tmps);
    strcat(query1, endQuery);
    strcat(query2, endQuery);
    int res;
    res = mysql_query(con, query1);
    if(!res){
        printf("update rh success!");
        printf("\n");
        
    }else{
        printf("update rh fail!");
        printf("\n");
        return -1;
    }      
    res = mysql_query(con, query2);
    if(!res){
        printf("update tmp success!");
        printf("\n");
    }else{
        printf("update tmp fail!");
        printf("\n");
        return -2;
    }
    return 0;
}

int main(void)
{

    /* 建立数据库连接*/
    MYSQL *con = mysql_init(NULL);
    if(con == NULL){
        printf("mysql_init(): %s\n", mysql_error(con));
        return -1;
    }

    // 创建TCP常连接对象
    if(!mysql_real_connect(con, "127.0.0.1", "localUser", "980612", "opcuaGatewayData", 0, NULL, 0)){
        printf("mysql_real_connect(): %s\n", mysql_error(con));
        return -1;
    }


    /*尝试读取数据*/
    printf("PIN:%d\n", pinNumber);
 
    if (-1 == wiringPiSetup()) {
        printf("Setup wiringPi failed!");
        return 1;
    }
  
    pinMode(pinNumber, OUTPUT); // set mode to output
    digitalWrite(pinNumber, 1); // output a high level 
 
    printf("Starting...\n");
    while (1) 
    {
        pinMode(pinNumber, OUTPUT); // set mode to output
        digitalWrite(pinNumber, 1); // output a high level 
        delay(3000);
        
        if (readSensorData())
        {   
            uint32 a = (databuf >> 24) & 0xff;
            // uint32 b = (databuf >> 16) & 0xff;
            uint32 b = 1;
            float rh = a + (float)b / 10;
            a = (databuf >> 8) & 0xff;
            b = databuf & 0xff;
            float tmp = a + (float)b / 10;
            int res = saveData(con, &rh, &tmp);
            if(res < 0){
                printf("save data failure");
            }           
            printf("Sensor data read ok!\n");
            printf("RH:%lf\n", rh); 
            printf("TMP:%lf\n", tmp);
            strcpy(query1, "");
            strcpy(query2, "");
        }
        else
        {
            printf("Sensor dosent ans!\n");
            
        }
        databuf = 0;

    }
    mysql_close(con);
    return 0;
}