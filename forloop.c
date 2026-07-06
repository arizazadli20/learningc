#include <stdio.h>
#include <unistd.h>

int forloop(){

    for (int i=10; i >= 0;  i-- ) {
        sleep(1);
        printf("%d\n", i);


    }

    printf("Happy NEW YEAR!!!");
    return 0;

};




//
// Created by ARIZ AZADOV on 06/07/26.
//
