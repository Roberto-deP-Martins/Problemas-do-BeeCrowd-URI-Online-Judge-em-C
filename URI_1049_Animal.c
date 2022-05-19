#include <stdio.h>
#include <string.h>

int main() {

    char classificacao_1[13], classificacao_2[9], classificacao_3[11];
    scanf(" %[^\n]", classificacao_1);
    if (strcmp(classificacao_1, "vertebrado") == 0)
    {
        scanf(" %[^\n]", classificacao_2);
        if (strcmp(classificacao_2, "ave") == 0)
        {
            scanf(" %[^\n]", classificacao_3);
            if (strcmp(classificacao_3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
            
        }
        else
        {
           scanf(" %[^\n]", classificacao_3);
            if (strcmp(classificacao_3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            } 
        }    
    }
    else
    {
        scanf(" %[^\n]", classificacao_2);
        if (strcmp(classificacao_2, "inseto") == 0)
        {
            scanf(" %[^\n]", classificacao_3);
            if (strcmp(classificacao_3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
           scanf(" %[^\n]", classificacao_3);
            if (strcmp(classificacao_3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            } 
        }    
    }
    return 0;
}