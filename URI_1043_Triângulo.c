#include <stdio.h>

int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if ((a + b) > c & (b + c) > a & (a + c) > b) { // Condição de existência do triângulo
        double perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else {
        double area = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}