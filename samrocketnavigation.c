#include <stdio.h>
#include <math.h>


int main() {

  double l;
    double h;
     double t0;
      double ve;
       double vd;
        double ae;
         double tmax;
          const double g=9.81;
      double A,B,C,D;
      double tx1,tx2;
 double ad1,ad2;

printf("Enter the numbers for l,h,t0,ve,vd,ae: ");
scanf("%lf %lf %lf %lf %lf %lf",&l,&h,&t0,&ve,&vd,&ae);


tmax= (ve * sin(ae))/g;
 printf("Calculated Tmax:%lf second \n",tmax);

 A = g * (t0 * t0) * vd - 2 * t0 * vd * ve * sin(ae) - 2 * h * vd;
 B = 2 * l * vd - 2 * t0 * vd * ve * cos(ae);
 C = 2 * l * g * t0 - 2 * l * ve * sin(ae) - 2 * h * ve * cos(ae) - g * (t0 * t0) * ve * cos(ae);
 D= (A*A)+(B*B)-(C*C);


 if (D< 0) {
  printf("Cannot Destroy");
  return 0;
 }
 else if (D>=0) {
  ad1 = 2 * atan2(A - C, B + sqrt(D));
ad2 = 2 * atan2(A - C, B - sqrt(D));
  printf("Two possible variant: 1.%lf 2.%lf \n",ad1,ad2);
 }

 tx1 = (l + t0 * vd * cos(ad1)) / (ve * cos(ae) + vd * cos(ad1));
 tx2 = (l + t0 * vd * cos(ad2)) / (ve * cos(ae) + vd * cos(ad2));

 if (tx1<= tmax) {
  printf("It is possible to destroy by ad1");
 }
 if (tx2 <=tmax) {
  printf("It is possible to destroy by ad1 and ad2");
 }
 
 if (tx1>tmax &&  tx2>tmax) {
  printf("Cannot Destroy");
 }


    return 0;
}
