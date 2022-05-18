#include <stdio.h>

int main() {

    float reajuste, salario;
    scanf("%f", &salario);
    if (salario <= 400) {
        reajuste = 1.15;
    }
    else if (salario > 400 && salario <= 800) {
        reajuste = 1.12;
    }
    else if (salario > 800 && salario <= 1200) {
        reajuste = 1.1;
    }
    else if (salario > 1200 && salario <= 2000) {
        reajuste = 1.07;
    }
    else if (salario > 2000) {
        reajuste = 1.04;
    }
    printf("Novo salario: %.2f\n", salario * reajuste);
    printf("Reajuste ganho: %.2f\n", (salario * reajuste) - salario);
    printf("Em percentual: %.0f %\n", (reajuste - 1) * 100);

    return 0;
}