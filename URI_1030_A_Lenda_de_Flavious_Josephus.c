#include <stdio.h>
#include <stdlib.h>

int *remove_pessoa(int *vetor, int tamanho_vetor, int eliminado);

int main() {

    int qtd_casos;
    scanf("%d", &qtd_casos);
    for (int i = 0; i < qtd_casos; i++)
    {
        int qtd_pessoas, tamanho_salto;
        scanf("%d %d", &qtd_pessoas, &tamanho_salto);
        

    }
    

    return 0;
}

int *remove_pessoa(int *vetor, int tamanho_vetor, int eliminado) {
    int *novo_vetor;
    novo_vetor = (int *)malloc((tamanho_vetor - 1) * sizeof(int));
    if (novo_vetor == NULL) {
        exit(1);
    }
    
    int t = 0;  // indice para o vetor novo
    for (int i = 0; i < tamanho_vetor; i++) {
        if (vetor[i] != eliminado) {
            novo_vetor[t] = vetor[i];
            t++;
        }
    }
    free(vetor);

    return novo_vetor;
}