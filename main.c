#include <stdio.h>
// #include <math.h>  <-- Artıq pow() istifadə etməyəcəyimiz üçün buna heç ehtiyac qalmır!

int main() {
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159265359; // Daha dəqiq PI

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    // pow() əvəzinə birbaşa vurma (Prosessor üçün ən sürətli yol)
    area = PI * (radius * radius);

    // Sonuna \n qoymaq terminalı təmiz saxlayır
    printf("The area is: %.2lf\n", area);

    return 0;
}