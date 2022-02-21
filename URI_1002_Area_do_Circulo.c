#include <stdio.h>

int main() {

    double raio;
    scanf("%lf", &raio);
    double PI = 3.14159;
    double resultado = PI * (raio * raio);
    printf("A=%.4lf\n", resultado);
    return 0;
}