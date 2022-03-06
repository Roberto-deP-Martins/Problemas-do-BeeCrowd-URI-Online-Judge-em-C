#include <stdio.h>

int main() {

    /* 12 é a qtd em km/l de uso de combustível */
    int tempo, vel_media, distancia;
    scanf("%i\n%i", &tempo, &vel_media);
    distancia = vel_media * tempo;
    float qtd_litros = distancia / 12.0; /* O .0 é necessário para que o C não interprete como uma divisão de resultado inteiro*/
    printf("%.3f\n", qtd_litros); 

    return 0;
}