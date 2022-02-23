#include <stdio.h>

int main() {

    double valor_a;
    scanf("%lf", &valor_a);
    double valor_b;
    scanf("%lf", &valor_b);
    double valor_c;
    scanf("%lf", &valor_c);
    double media = ((valor_a * 2) + (valor_b * 3) + (valor_c * 5)) / 10;
    printf("MEDIA = %.1lf\n", media);

    return 0;
}