#include <stdio.h>

int main() {

    double valor_a;
    scanf("%lf", &valor_a);
    double valor_b;
    scanf("%lf", &valor_b);
    double media = ((3.5 * valor_a) + (7.5 * valor_b)) / 11;
    printf("MEDIA = %.5lf\n", media);

    return 0;
}