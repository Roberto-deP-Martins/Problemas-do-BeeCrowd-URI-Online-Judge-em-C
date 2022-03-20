# include <stdio.h>

int main() {

    int cod, qtd;
    float preco_unitario, total;
    scanf("%i %i", &cod, &qtd);
    if (cod == 1) {
        preco_unitario = 4;
    }
    else if (cod == 2) {
        preco_unitario = 4.5;
    }
    else if (cod == 3) {
        preco_unitario = 5;
    }
    else if (cod == 4) {
        preco_unitario = 2;
    }
    else if (cod == 5) {
        preco_unitario = 1.5;
    }
    total = preco_unitario * qtd;
    printf("Total: R$ %.2f\n", total);

    return 0;
}