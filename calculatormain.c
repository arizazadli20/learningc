#include <stdio.h>

//Calculator

int calculator () {

    char operator='\0';
    double num1=0.0;
    double num2=0.0;
    double result=0.0;

    printf("Enter your first number: ");
    scanf("%lf", &num1);

    printf("Enter your operation (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter your second number: ");
    scanf(" %lf", &num2);


    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 == 0) {
                printf("Yadads cannot divide by zero!");
            }
            else
            {
                result = num1 / num2;
            };
            break;

        default: printf("Wrong input"); break;
    }
    printf("Your result is: %.2lf", result);

    return 0;
}//
// Created by ARIZ AZADOV on 14/06/26.
//
