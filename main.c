
#include <stdio.h>
#include <stdbool.h>


int main() {

    char item[50] = "";
    char currency = '$';
    float price=0;
    int quantity=0;
    float total=0;

    printf("Which product u want to buy?");
    scanf("%s",item);

    printf("What is the price of product?:  ");
    scanf("%f",&price);

    printf("What is the quantity?:  ");
    scanf(" %d",&quantity);

    total=price*quantity;

    printf("%c""%.1f",currency,total);


    return 0;
}
