# include <stdio.h>

int main() {

    float valor_temp;
    int qtd, valor;
    scanf("%f", &valor_temp);
    valor = valor_temp * 100;
    printf("NOTAS:\n");
    qtd = valor / 10000;
    printf("%i nota(s) de R$ 100.00\n", qtd);
    valor = valor % 10000;

    qtd = valor / 5000;
    printf("%i nota(s) de R$ 50.00\n", qtd);
    valor = valor % 5000;

    qtd = valor / 2000;
    printf("%i nota(s) de R$ 20.00\n", qtd);
    valor = valor % 2000;

    qtd = valor / 1000;
    printf("%i nota(s) de R$ 10.00\n", qtd);
    valor = valor % 1000;

    qtd = valor / 500;
    printf("%i nota(s) de R$ 5.00\n", qtd);
    valor = valor % 500;

    qtd = valor / 200;
    printf("%i nota(s) de R$ 2.00\n", qtd);
    valor = valor % 200;

    printf("MOEDAS:\n");
    qtd = valor / 100;
    printf("%i moeda(s) de R$ 1.00\n", qtd);
    valor = valor % 100;
    
    qtd = valor / 50;
    printf("%i moeda(s) de R$ 0.50\n", qtd);
    valor = valor % 50;

    qtd = valor / 25;
    printf("%i moeda(s) de R$ 0.25\n", qtd);
    valor = valor % 25;

    qtd = valor / 10;
    printf("%i moeda(s) de R$ 0.10\n", qtd);
    valor = valor % 10;
    
    qtd = valor / 5;
    printf("%i moeda(s) de R$ 0.05\n", qtd);
    valor = valor % 5;

    qtd = valor / 1;
    printf("%i moeda(s) de R$ 0.01\n", qtd);
    return 0;
}