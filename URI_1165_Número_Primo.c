#include <stdio.h>

int main() {

    int qtd_testes, num, primo, divisor, divisores;
    scanf("%d", &qtd_testes);
    int i; // Declarado fora do loop pois compilador do site não aceita dentro de for
    for (i = 0; i < qtd_testes; i++) {
        divisores = 0;
        divisor = 1;
        scanf("%d", &num);
        while (divisor <= num && divisores <= 2) { // Encerra no que ocorrer primeiro
        int resto = num % divisor;
        if (num % divisor == 0) {
            divisores += 1;
        }
        divisor += 1;
    }
    primo = divisores <= 2;
    if (primo) {
        printf("%d eh primo\n", num);
    }
    else {
        printf("%d nao eh primo\n", num);
    }
    }

    return 0;
}