#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* cifra_cesar(char* msg, int desloc);

int main() {
    int qtd_exec, i, deslocamento;
    char cifra[51], *cifra_decodificada;
    scanf("%d", &qtd_exec);
    for (i = 0; i < qtd_exec; i++)
    {
        scanf(" %50[^\n]", cifra);
        scanf(" %d", &deslocamento);
        cifra_decodificada = cifra_cesar(cifra, deslocamento);
        printf("%s\n", cifra_decodificada);
        free(cifra_decodificada);  // Free do malloc da função
    }
    
    return 0;
}


char* cifra_cesar(char* msg, int desloc) {
    int t, tamanho = strlen(msg) + 1;
    char *codificado, caracter;
    codificado = (char *) malloc(tamanho * sizeof(char));  // Aloca memória o suficiente para o vetor
    for (t = 0; t < tamanho; t++)
    {
        if (t == tamanho - 1)  //Se é último índice, adiciona caractere nulo
        {
            codificado[t] = '\0';
        }
        else {
            caracter = msg[t] - desloc;
            if ((msg[t] - desloc) < 65)
            {
                caracter += 26;
            }
            codificado[t] = caracter;
        }
    }
    return codificado;
}