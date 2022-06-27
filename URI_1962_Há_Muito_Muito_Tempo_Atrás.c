#include <stdio.h>
 
int main() {
    int qtd, anos, i;
    scanf("%d", &qtd);
    for (i = 0; i < qtd; i++) {
        scanf("%d", &anos);
        if (anos >= 2015) {
            int anos_passados = anos -2015 + 1;
            printf("%d A.C.\n", anos_passados);
        }
        else {
           int anos_passados = 2015 - anos;
           printf("%d D.C.\n", anos_passados); 
        }
    }
    return 0;
}