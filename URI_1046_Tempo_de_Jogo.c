#include <stdio.h>

int main() {

    int hora_inicio, hora_fim;
    scanf("%d %d", &hora_inicio, &hora_fim);
    if (hora_fim != hora_inicio) {
        if (hora_fim < hora_inicio) {
            hora_fim += 24;  // Adiciona mais 24 horas a hora_fim para que o cálculo seja correto, já que hora_fim ser menor indica virada de um dia para outro
        }
        printf("O JOGO DUROU %d HORA(S)\n", hora_fim - hora_inicio);
    }
    else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}