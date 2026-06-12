#include <stdio.h>

//Switches

int switches () {

    char weekday='\0';
    printf("ENTER DAY OF THE WEEK (M,T,W,H,F,S,U): ");
    scanf("%c",&weekday);

    switch (weekday){

        case 'M': printf("Monday"); break;
        case 'T': printf("Tuesday"); break;
        case 'W': printf("Wednesday"); break;
        case 'H': printf("Thursday"); break;
        case 'F': printf("Friday"); break;
        case 'S': printf("Saturday"); break;
        case 'U': printf("Sunday"); break;
        default:(printf("Please only enter a character- M,T,W,H,F,S,U"));
    }
    return 0;
}//
// Created by ARIZ AZADOV on 12/06/26.
//
