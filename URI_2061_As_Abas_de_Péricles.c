#include <stdio.h>
#include <string.h>

int main() {

    int qtd_abas, qtd_acoes;
    scanf("%d %d", &qtd_abas, &qtd_acoes);
    char acao[7];
    for (int i = 0; i < qtd_acoes; i++) {
        scanf("%s", acao);
        if (strcmp(acao, "fechou") == 0) {
            qtd_abas += 1;
        }
        else {
            qtd_abas -= 1;
        }
    }
    printf("%d\n", qtd_abas);
    
    return 0;
}