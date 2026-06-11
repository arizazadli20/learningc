#include <stdio.h>

int radius() {
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159265359;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * (radius * radius);

    printf("The area is: %.2lf\n", area);

    return 0;
}//
// Created by ARIZ AZADOV on 11/06/26.
//
