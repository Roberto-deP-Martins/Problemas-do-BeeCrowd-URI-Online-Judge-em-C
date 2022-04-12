#include <stdio.h>

int main() {

    int a, b, maior, menor;
    scanf("%d %d", &a, &b);
    if (a > b) {
        maior = a;
        menor = b;
    }
    else {
        maior = b;
        menor = a;
    }
    maior % menor == 0 ? printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n"); // Se verdadeiro, printa "São Multiplos", caso contrário, "Nao sao Multiplos"

    return 0;
}