#include <stdio.h>
#include <math.h>


int main() {
 char input;
 double leg1;
 double leg2;
 double pyth;
 int width;
 int length;
 long long area;


 printf("Choose one symbol (T - triangle, R - rectangle): ");
 scanf(" %c", &input);


 if (input == 'T' || input == 'R') {

  if (input == 'T') {
   printf("Enter legs of triangle: ");
   scanf("%lf,%lf",&leg1,&leg2);
   if (leg1>0 && leg2>0) {

    pyth= hypot(leg1, leg2);
    printf("The answer is %.2lf", pyth);

   }
   else {printf("INVALID INPUT");}

  }

  if (input == 'R') {
 printf("Enter the width of rectangle: ");
 scanf("%d",&width);
 printf("Enter the length of rectangle: ");
 scanf("%d",&length);

 area=(width * length);

 printf("Area of rectangle equal to %lld",area);


}
 }
  else {printf("WRONG INPUT");}



}
