#include <stdio.h>

int main() {
    int valor, qtd, divisor;
    scanf("%i", &valor);
    printf("%i\n", valor);
    for (divisor = 100; divisor > 0;){
        qtd = valor / divisor;
        printf("%i nota(s) de R$ %i,00\n", qtd, divisor);
        valor = valor % divisor;
        if (divisor != 50) {
            divisor = divisor / 2;
        }
        else {
            divisor = 20;
        }
    }

    return 0;
}
