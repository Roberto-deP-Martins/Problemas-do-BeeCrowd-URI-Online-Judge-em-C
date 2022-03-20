# include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4, media;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    media = (2 * nota1 + 3 * nota2 + 4 * nota3 + nota4) / (2 + 3 + 4 + 1);
    printf("Media: %.1f\n", media);
    if (media >= 7) {
        printf("Aluno aprovado.\n");
    } 
    else if (media < 5) {
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");
        float nota_exame;
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
        media = (media + nota_exame) / 2;
        if (media >= 5) {
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    
    return 0;
}