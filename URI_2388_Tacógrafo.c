#include <stdio.h>

int main() {
    int total = 0;
    int qtd_dados, tempo_percorrido, velocidade_momento, i;
    scanf("%d", &qtd_dados);
    for (i = 0; i < qtd_dados; i++) {
        scanf("%d %d", &tempo_percorrido, &velocidade_momento);
        total += tempo_percorrido * velocidade_momento;
    }
    printf("%d\n", total);
}