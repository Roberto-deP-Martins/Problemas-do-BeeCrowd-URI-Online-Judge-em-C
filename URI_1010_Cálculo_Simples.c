#include <stdio.h>

int main(){
    int cod_pc_1, qtd_pc_1, cod_pc_2, qtd_pc_2;
    float valor_pc1, valor_pc2;
    scanf("%i %i %f", &cod_pc_1, &qtd_pc_1, &valor_pc1);
    scanf("%i %i %f", &cod_pc_2, &qtd_pc_2, &valor_pc2);
    float valor_total = ((qtd_pc_1 * valor_pc1) + (qtd_pc_2 * valor_pc2));
    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;
}