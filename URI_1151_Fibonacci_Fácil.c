#include <stdio.h>

int main() {

    int qtd_termos, termo_1 = 0, termo_2 = 1, termo_corrente, termo_2_temp;
    scanf("%d", &qtd_termos);
    /* Como os dois primeiros termos já nos são dados (e necessários para a relação de recorrência), 
    o número de termos que devem ser calculados para satisfazer o digitado pelo usuário diminui em 2*/
    qtd_termos -= 2;
    printf("0 1 "); // Mostra 2 primeiros termos, com espaço em branco para se adicionar próximos
    int i; // Necessário pois compilador do BeeCrowd não aceita declaração no loop for
    for (i = 0; i < qtd_termos; i++) {
        if (i != qtd_termos - 1) {
            termo_corrente = termo_1 + termo_2;
            printf("%d ", termo_corrente); // Mostra próximo termo, com espaço para os seguintes
        }
        else { // Caso se esteja calculando o último termo, há quebra de linha ao invés de espaço
            termo_corrente = termo_1 + termo_2;
            printf("%d\n", termo_corrente);
        }
        // Atualiza as parcelas da soma
        termo_2_temp = termo_2;
        termo_2 = termo_corrente;
        termo_1 = termo_2_temp;
    }

    return 0;
}