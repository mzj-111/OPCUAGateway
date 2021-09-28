#include <string.h>
#include "mariadb/mysql.h"
#include <stdio.h>
#include <stdlib.h>
#include "mariadb/errmsg.h"
#include "mariadb/mysqld_error.h"
#include <readDht11Data.h>

MYSQL con;
MYSQL_RES *res_ptr;
MYSQL_ROW sqlrow;

void connection(const char* host, const char* user, const char* password, const char* database){
    mysql_init(&con);
    if (mysql_real_connect(&con, host, user, password, database, 0, NULL, 0)) {
		printf("Connection success!\n");
	} else {
		fprintf(stderr, "Connection failed!\n");
		if (mysql_errno(&con)) {
			fprintf(stderr, "Connection error %d: %s\n", mysql_errno(&con), mysql_error(&con));
		}
		exit(EXIT_FAILURE);
    }
}



int readData(MYSQL* con, float* rh, float* tmp){
    connection("localhost", "localUser", "980612", "opcuaGatewayData");
    
    int res = mysql_query(con, "SELECT * from dht11");
    if(res){
        fprintf(stderr, "SELECT error: %s\n", mysql_error(con));
    }else{
        res_ptr = mysql_use_result(con);
        if(res_ptr){
            // sqlrow = mysql_fetch_row(res_ptr);
            sqlrow = mysql_fetch_row(res_ptr);
            *rh = atof(sqlrow[2]);
            *tmp = atof(sqlrow[1]);
            printf("rh:%f\n", *rh);
            printf("tmp:%f\n", *tmp);
            if (mysql_errno(con)) {
				fprintf(stderr, "Retrive error: %s\n", mysql_error(con));
			}
			mysql_free_result(res_ptr);
        }
    }
    mysql_close(con);
	exit(EXIT_SUCCESS);
}

int main(){
    
    float rh, tmp;
    readData(&con, &rh, &tmp);
}