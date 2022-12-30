#include <stdio.h>
 
int main() {
 
    char string[501];
    scanf("%[^\n]s", string);
    int counter = 0;
    int doesFit = 1;
    for (int i = 0; i <= 80 && string[i] != '\0'; i++) {
        if (i == 80)
            doesFit = 0;
    }
    if (doesFit)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}