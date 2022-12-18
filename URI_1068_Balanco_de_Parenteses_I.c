#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
    char character;
    struct list *next;
} List;

typedef struct stack{
    List *top;
} Stack;

Stack *inicializa();
void push(Stack *stack, char elem);
char pop(Stack *stack);

int main() {
    char expression[1002];
    while (fgets(expression, 1002, stdin) != NULL) {
        Stack *stack = inicializa();
        for (int i = 0; expression[i] != '\n'; i++)
        {
            if (expression[i] == ')' || expression[i] == '(')
                push(stack, expression[i]);
        }
        int concluded = 0;
        int openAmount = 0;
        int closeAmount = 0;
        int isFirst = 1;
        char result[10] = "correct";
        while (stack->top != NULL)
        {
            char character = pop(stack);
            if (character == '(') {
                if (isFirst) {
                    strcpy(result, "incorrect");
                    concluded = 1;
                }
                if (!concluded) {
                    openAmount++;
                } 
            }
            else {
                if (!concluded)
                    closeAmount++;
            }
            if (openAmount > closeAmount)
            {
                strcpy(result, "incorrect");
                concluded = 1;
            }
            if (isFirst == 1)
                isFirst = 0;
        }
        if (closeAmount > openAmount)
            strcpy(result, "incorrect");
        printf("%s\n", result);
    }
}

Stack *inicializa() {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack *stack, char elem) {
    List *new = (List*) malloc(sizeof(List));
    new->character = elem;
    new->next = stack->top;
    stack->top = new;
}

char pop(Stack *stack) {
    char character = stack->top->character;
    List *temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return character;
}