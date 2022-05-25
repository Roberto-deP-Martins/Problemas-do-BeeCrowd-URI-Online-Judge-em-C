#include <stdio.h>

int main() {

    int qtd_exec, qtd_termos;
    scanf("%d", &qtd_exec);
    for (int t = 0; t < qtd_exec; t++)
    {
        long long int termo_1 = 0, termo_2 = 1, termo_corrente = 0, termo_2_temp;
        scanf(" %d", &qtd_termos);
        if (qtd_termos == 0)
        {
            printf("Fib(0) = 0\n");
        }
        else if (qtd_termos == 1)
        {
            printf("Fib(1) = 1\n");
        }
        else {
            for (int i = 0; i < qtd_termos - 1; i++) {
                termo_corrente = termo_1 + termo_2;
                termo_2_temp = termo_2;
                termo_2 = termo_corrente;
                termo_1 = termo_2_temp;
                }
            printf("Fib(%d) = %lld\n", qtd_termos, termo_corrente);
        }
    }
        
    return 0;
}