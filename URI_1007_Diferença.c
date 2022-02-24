#include <stdio.h>
 
int main() {
 
    int a, b, c, d;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    int diferenca = (a * b - c * d);
    printf("DIFERENCA = %i\n", diferenca);
 
    return 0;
}