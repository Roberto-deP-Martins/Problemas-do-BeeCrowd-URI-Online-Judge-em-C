#include <stdio.h>

int main() {

    int idade, anos, meses, dias;
    scanf("%i", &idade);
    anos = idade / 365;
    printf("%i ano(s)\n", anos);
    meses = (idade % 365) / 30;
    printf("%i mes(es)\n", meses);
    dias = (idade % 365) % 30;
    printf("%i dia(s)\n", dias);

    return 0;
}
