#include <stdio.h>

int main() {
    int valor, qtd;
    scanf("%i", &valor);
    while (valor != 0)
    {
        printf("%i\n", valor);
        qtd = valor / 100;
        printf("%i nota(s) de R$ 100,00\n", qtd);
        valor = valor % 100;

        qtd = valor / 50;
        printf("%i nota(s) de R$ 50,00\n", qtd);
        valor = valor % 50;

        qtd = valor / 20;
        printf("%i nota(s) de R$ 20,00\n", qtd);
        valor = valor % 20;

        qtd = valor / 10;
        printf("%i nota(s) de R$ 10,00\n", qtd);
        valor = valor % 10;

        qtd = valor / 5;
        printf("%i nota(s) de R$ 5,00\n", qtd);
        valor = valor % 5;

        qtd = valor / 2;
        printf("%i nota(s) de R$ 2,00\n", qtd);
        valor = valor % 2;

        qtd = valor / 1;
        printf("%i nota(s) de R$ 1,00\n", qtd);
        valor = valor % 1;
    }

    return 0;
}