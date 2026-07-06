#include <stdio.h>
#include <unistd.h>

int forloop(){

    for (int i=0; i <= 10;  i++) {

        if (i == 4) {
            break;
        }
        printf("%d\n", i);


    }

    printf("Happy NEW YEAR!!!");
    return 0;

};




//
// Created by ARIZ AZADOV on 06/07/26.
//
