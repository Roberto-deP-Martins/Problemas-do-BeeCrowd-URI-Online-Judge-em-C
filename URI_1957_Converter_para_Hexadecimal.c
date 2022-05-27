#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printa_hex(int num);

int main() {
    int dec, *digitos, expoente = 1;
    scanf("%d", &dec);
    if (dec < 16) {
        printa_hex(dec);
    }
    else {
        while (pow(16, expoente) < dec) {
            expoente++;
        }
        digitos = (int *)malloc(expoente * sizeof(int));
        int i;
        for (i = 0; dec > 0; i++) {
            digitos[i] = dec % 16;
            dec = dec / 16;
        }
        for (i -= 1; i > -1; i--) {
            printa_hex(digitos[i]);
        }
        free(digitos);
    }
    printf("\n");
}

void printa_hex(int num) {
    if (num < 10) {
            printf("%d", num);
        }
        else if (num == 10) {
            printf("A");
        }
        else if (num == 11) {
            printf("B");
        }
        else if (num == 12) {
            printf("C");
        }
        else if (num == 13) {
            printf("D");
        }
        else if (num == 14) {
            printf("E");
        }
        else {
            printf("F");
        }
}