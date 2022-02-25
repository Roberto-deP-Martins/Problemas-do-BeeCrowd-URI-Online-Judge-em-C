#include <stdio.h>

int main(){

    char nome;
    scanf("%s", &nome);
    double salario_fixo, total_vendas, bonus, salario_total;
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    bonus = total_vendas * 0.15;
    salario_total = salario_fixo + bonus;
    printf("TOTAL = R$ %.2lf\n", salario_total);

    return 0;
}