#include <stdio.h>
 
int main() {
    int tipo, vetor_chas[5], qtd_acertos = 0;
    scanf("%d\n%d %d %d %d %d", &tipo, &vetor_chas[0], &vetor_chas[1], &vetor_chas[2], &vetor_chas[3], &vetor_chas[4]);
    int i;
    for (i = 0; i < 5; i++) {
        if (vetor_chas[i] == tipo) {
            qtd_acertos += 1;
        }
    }
    printf("%d\n", qtd_acertos);
    
    return 0;
}