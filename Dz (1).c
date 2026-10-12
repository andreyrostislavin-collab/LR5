#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

#ifndef M_E
#define M_E 2.71828182845904523536
#endif


double task(double x, double y, double z);

int main() {
    
    setlocale(LC_ALL, ".UTF8");

    
    double x = 2.444;
    double y = 0.869 * pow(10, -2);
    double z = -0.13 * pow(10, 3);
    double a;

    
    a = task(x, y, z);

    
    printf("%.6f\n", a);

    return 0;
}


double task(double x, double y, double z) {
    double num1 = pow(x, y + 1) + pow(M_E, y - 1);
    double mun1 = 1.0 + x * fabs(y - tan(z));

    double drob1 = num1 / mun1;

    double num2 = drob1 * (1.0 + fabs(y - x));
    double drob2 = pow(fabs(y - x), 2) / 2.0;
    double drob3 = pow(fabs(y - x), 3) / 3.0;

    double res = num2 + drob2 - drob3;
    return res;
}