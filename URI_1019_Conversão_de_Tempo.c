#include <stdio.h>

int main(){

    int tempo, horas, minutos, segundos;
    scanf("%i", &tempo);
    /* 3600 = 60 * 60, ou seja, duas conversões sucessivas, de segundos diretamente para horas. */
    horas = tempo / (3600);
    if (horas > 0) {
        minutos = (tempo % 3600) / 60;
    }
    else {
        minutos = tempo / 60;
    }
    if (minutos > 0) {
        segundos = tempo - (horas * 3600 + minutos * 60);
    }
    else {
        segundos = tempo;
    }
    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}