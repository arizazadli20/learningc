#include <stdio.h>
#include <math.h>

//CURRENCY APP (DOLLAR AND MANAT)

int currency() {
    int choice=0;
    float dollar=0;
    float manat=0;
    char dol[]="$";
    char man[]="₼";

    printf("Currency Calculator\n");
    printf("1.DOLLAR TO MANAT\n");
    printf("2.MANAT TO DOLLAR\n");
    printf("ENTER YOUR CHOICE:  ");
    scanf("%d",&choice);



    if (choice == 1) {

        printf("Enter the dollar amount:  ");
        scanf("%f",&dollar);
        manat=dollar*1.70;
        printf("IT IS %.2f %s",manat,man);

    }
    else if (choice == 2) {

        printf("Enter the manat amount:  ");
        scanf("%f",&manat);
        dollar=manat*0.59;
        printf("IT IS %.2f %s",dollar,dol);

    }
    else{
        printf("INVALID INPUT");
    }

    return 0;
}//
// Created by ARIZ AZADOV on 12/06/26.
//
