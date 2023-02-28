#include <stdio.h>
 
int main() {
 
    int xpBoost;
    int monsterXP;
    scanf(" %d %d", &xpBoost, &monsterXP);
    while (xpBoost != 0 && monsterXP != 0) {
        printf("%d\n", xpBoost * monsterXP);
        scanf(" %d %d", &xpBoost, &monsterXP);
    }
 
    return 0;
}
