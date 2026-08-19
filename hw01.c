#include <stdio.h>
#include <math.h>

//homework task 1

int main() {

    double x1=0.0;
    double y1=0.0;
    double r1=0.0; //a
    double x2=0.0;
    double y2=0.0;
    double r2=0.0;
    double eps = 1e-10;
    double pi=3.14159265358979323846;




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



    if (d < eps && fabs(r1 - r2) < eps) {
        printf("The circles are identical, overlap: %f\n", pi * r1 * r1);
    }
    else if (fabs(d - (r1 + r2)) < eps) {
        printf("External touch, no overlap.\n");
    }
    else if (fabs(d - fabs(r1 - r2)) < eps) {
        if (r1 < r2) {
            printf("Internal touch, circle #1 lies inside circle #2, overlap: %f\n", pi * r1 * r1);
        } else {
            printf("Internal touch, circle #2 lies inside circle #1, overlap: %f\n", pi * r2 * r2);
        }
    }
    else if (d > r1 + r2) {
        printf("The circles lie outside each other, no overlap.\n");
    }
    else if (d < fabs(r1 - r2)) {
        if (r1<r2){printf("Circle #1 lies inside circle #2, overlap: %f\n", pi * r1 * r1);}
        else      {printf("Circle #2 lies inside circle #1, overlap: %f\n", pi * r2 * r2);}
    }
    else if (fabs(r1 - r2) < d && d < r1 + r2) {
        double p=(r1 + r2 + d) / 2 ;
        double T = sqrt(p*(p-r1)*(p-r2)*(p-d));
        double alpha = acos((r1*r1+d*d-r2*r2)/(2*r1*d));
        double beta = acos((r2*r2+d*d-r1*r1)/(2*r2*d));
        double overlap = (r1 * r1 * alpha) + (r2 * r2 * beta) - (2 * T);
        printf("The circles intersect, overlap: %f\n", overlap);
    }





    return 0;
}//
// Created by ARIZ AZADOV on 19/08/26.
//
