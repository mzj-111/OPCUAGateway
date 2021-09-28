#include "dht11.h"
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long uint32;

int main(void){
    double tmp;
    double rh;
    uint32 ans = 123;
    if(returnSensorData(&ans, &tmp, &rh)){
        printf("%ld\n", ans);
        printf("RH:%f\n", rh);
        printf("TMP:%f\n", tmp);
    }
    else{
        printf("failure\n");
    }
    
    return 0;
}