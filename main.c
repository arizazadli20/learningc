#include <stdio.h>
#include <math.h>

//homework task 1

int main() {

    double x1=0.0;
    double y1=0.0;
    double r1=0.0;
    double x2=0.0;
    double y2=0.0;
    double r2=0.0;

   
    printf("Enter circle #1 parameters:\n");
    if (scanf("%lf %lf %lf", &x1, &y1, &r1) != 3 || r1 <= 0) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Enter circle #2 parameters:\n");
    if (scanf("%lf %lf %lf", &x2, &y2, &r2) != 3 || r2 <= 0) {
        printf("Invalid input.\n");
        return 0;
    }


    double d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));




    return 0;
}