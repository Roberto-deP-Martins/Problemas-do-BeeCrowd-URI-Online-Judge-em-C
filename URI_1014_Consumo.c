#include <stdio.h>
 int main() {

    int distancia; 
    float combustivel_usado, consumo;
    scanf("%i\n%f", &distancia, &combustivel_usado);
    consumo = distancia / combustivel_usado;
    printf("%.3f km/l\n", consumo);

    return 0;
 } 
