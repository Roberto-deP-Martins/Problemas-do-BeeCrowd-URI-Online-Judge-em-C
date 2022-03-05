#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    int maior_ab = (a + b + abs(a - b)) / 2;
    int maior_todos = (maior_ab + c + abs(maior_ab - c)) / 2;
    printf("%i eh o maior\n", maior_todos);

    return 0;
}