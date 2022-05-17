#include <stdio.h>

int main() {

    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    scanf("%d %d %d %d", &hora_inicio, &minuto_inicio, &hora_fim, &minuto_fim);
    // Converte as horas para minutos e as somam com seus repsectivos minutos adicionais
    int tempo_inicio = (hora_inicio * 60) + minuto_inicio;
    int tempo_fim = (hora_fim * 60) + minuto_fim;
    if (tempo_fim != tempo_inicio) {
        if (tempo_fim < tempo_inicio) {
            tempo_fim += (24 * 60);  // Adiciona mais 24 horas, em minutos, ao tempo_fim para que o cálculo seja correto, já que tempo_fim ser menor indica virada de um dia para outro
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (tempo_fim - tempo_inicio) / 60, (tempo_fim - tempo_inicio) % 60);  // Imprime as horas, dadas pela diferença dos tempos convertidos para horas, e os minutos, dados pelo resto da diferença dos tempos
    }
    else {  // Se tempos são iguais o jogo durou exatas 24 horas
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;
}