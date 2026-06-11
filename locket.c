
#include <stdio.h>

//Locker

int main() {

    int first=0;
    int second=0;
    int third=0;
    int fourth=0;

    printf("Enter the first digit: ");
    scanf("%d", &first); // Rəqəm alırıq

    if (first == 2) { printf("Enter the second digit: ");}
    else {printf("Failed");}
    scanf("%d", &second);

    if (second == 0) { printf("Enter the third digit: ");}
    else {printf("Failed");}
    scanf("%d", &third);

    if (third == 0) { printf("Enter the fourth digit: ");}
    else {printf("Failed");}
    scanf("%d", &fourth);

    if (fourth == 8) { printf("SUCCESSFULL, Your code is %d%d%d%d", first,second,third,fourth); }
    else {printf("Failed");}



    return 0;
}
//
// Created by ARIZ AZADOV on 11/06/26.
//
