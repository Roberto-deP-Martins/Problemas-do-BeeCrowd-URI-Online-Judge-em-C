#include <stdio.h>
#include <math.h>

int main(){

    double ponto_a, ponto_b, ponto_c, triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%lf %lf %lf", &ponto_a, &ponto_b, &ponto_c);
    triangulo = (ponto_a * ponto_c) / 2;
    circulo = 3.14159 * pow(ponto_c, 2); 
    trapezio = ((ponto_a + ponto_b) * ponto_c) / 2;
    quadrado = pow(ponto_b, 2);
    retangulo = ponto_a * ponto_b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;
}