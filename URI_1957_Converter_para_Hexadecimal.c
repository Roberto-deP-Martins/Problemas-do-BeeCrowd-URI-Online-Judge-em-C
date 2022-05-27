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
    switch (num) {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", num);
            break;
    }
}