#include <stdio.h>
 
int main() {
    int metros_pretendidos, comprimento_pista;
    scanf("%d %d", &metros_pretendidos, &comprimento_pista);
    // Resto dá o ponto de término pois dá a distância que sobra após voltas completas
    printf("%d\n", metros_pretendidos % comprimento_pista);
 
    return 0;
}