#include <stdio.h>
 
int main() {
    float a,b;
    scanf("%f %f", &a, &b);
    float diferenca = b - a;
    float aumento_percentual = (diferenca / a) * 100;
    printf("%.2f%\n", aumento_percentual);
    
    return 0;
}