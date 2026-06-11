#include <stdio.h>


int lockernew() {
    int box = 0;
    int locker = 0;

    printf("What is the size of box (1-Small, 2-Medium, 3-Large): \n");
    scanf("%d", &box);

    if (box != 1 && box != 2 && box != 3) {
        printf("Error: Invalid box size!\n");
        return 1;
    }
    printf("Enter 4 digit code: \n");
    scanf("%d", &locker);

    if (locker > 9999) {
        printf("Enter 4 digits only!\n");
        return 1;
    }
    if (locker < 0) {
        printf("Enter valid positive digits, please!\n");
        return 1;
    }

    if (locker == 2008) {
        printf("SUCCESSFUL\n");
    } else {
        printf("WRONG CODE\n");
    }
    return 0;
}//
// Created by ARIZ AZADOV on 12/06/26.
//
