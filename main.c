#include <stdio.h>

//Switches

int main () {

    float number1=0;
    float number2=0;
    char symbol;

    printf("Enter your first number: ");
    scanf("%f",&number1);

    printf("Enter your second number: ");
    scanf("%f",&number2);

    printf("Enter your operation (+,-,*,/): ");
    scanf("%c",symbol);

    switch (symbol) {

        case '+': printf("%f",number1+number2); break;
            case '-': printf("%f",number1-number2); break;
            case '*': printf("%f",number1*number2); break;
            case '/': printf("%f",number1/number2); break;
    }


    return 0;
}