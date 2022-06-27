#include <stdio.h>

int monta_romano(int digito_romano, int i, char numero_romano[10],char sinal_1,char sinal_5, char sinal_10);

int main() {
    int arabico, digito, i = 0;
    scanf("%d", &arabico);
    char romano[10], simbolo_1, simbolo_5, simbolo_10;  // Sinal de 1,5 e 10 que varia para casa da centena, dezena e unidade
    while (arabico > 10)
    {
        if (arabico < 1000 && arabico > 99)
        {
            digito = arabico / 100;  // Divisão por 100 em um número entre 100 e 999 dá o dígito da casa da centena
            arabico %= 100;  // Operação módulo dá o resto do número excluindo o primeiro dígito da direita para esquerda
            simbolo_1 = 'C', simbolo_5 = 'D', simbolo_10 = 'M';
        }
        else if (arabico < 100 && arabico > 9)
        {
            digito = arabico / 10;  // Divisão por 10 dá o dígito da casa da dezena
            arabico %= 10;
            simbolo_1 = 'X', simbolo_5 = 'L', simbolo_10 = 'C';
        }
        i = monta_romano(digito, i, romano, simbolo_1, simbolo_5, simbolo_10);
    }
    if (arabico == 10) {
        romano[i] = 'X';
        i++;
    }
    else
    {
        i = monta_romano(arabico, i, romano, 'I', 'V', 'X');
    }
    romano[i] = '\0'; // Finaliza string com caractere null
    printf("%s\n", romano);

    return 0;
}

int monta_romano(int digito_romano, int i, char numero_romano[10],char sinal_1, char sinal_5, char sinal_10) {
    if (digito_romano < 4)
    {
        for (int t = 0; t < digito_romano; t++) {
            numero_romano[i] = sinal_1;  // Coloca a quantidadde do símbolo para 1 na casa decimal apropriada
            i++;
        }
    }
    else if (digito_romano == 4)
    {
        numero_romano[i] = sinal_1;
        i++;
        numero_romano[i] = sinal_5;
        i++;
    }
    else if (digito_romano > 4 && digito_romano < 9)
    {
        numero_romano[i] = sinal_5;
        i++;
        if (digito_romano > 5) {
            for (int t = 0; t < digito_romano - 5; t++) {
                numero_romano[i] = sinal_1;
                i++;
            }
        }
    }
    else {
        numero_romano[i] = sinal_1;
        i++;
        numero_romano[i] = sinal_10;
        i++;
    }
    return i;
}