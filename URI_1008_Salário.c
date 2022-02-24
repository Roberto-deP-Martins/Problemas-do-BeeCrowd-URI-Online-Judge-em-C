#include <stdio.h>

int main(){

    int num_funcionario, horas_trabalhadas;
    scanf("%i", &num_funcionario);
    printf("NUMBER = %i\n", num_funcionario);
    scanf("%i", &horas_trabalhadas);
    float salario;
    scanf("%f", &salario);
    float salario_total = (horas_trabalhadas * salario);
    printf("SALARY = U$ %.2f\n", salario_total);

    return 0;
}