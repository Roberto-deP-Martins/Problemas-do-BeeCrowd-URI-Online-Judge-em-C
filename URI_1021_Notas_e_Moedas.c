# include <stdio.h>

int main() {

    double valor_temp, divisor_formatado;
    int qtd, valor, divisor;
    scanf("%lf", &valor_temp);
    valor = valor_temp * 100;
    printf("NOTAS:\n");
    for (divisor = 10000; divisor > 0;) {
        qtd = valor / divisor;
        divisor_formatado = divisor / 100.0;
        if (divisor >= 200) { // 200 representa 200 centavos, ou seja, 2 reais, menor valor ainda em nota.
            printf("%d nota(s) de R$ %.2lf\n", qtd, divisor_formatado);
        }
        else { // Abaixo de 200 centavos, ou seja, 1 real ou menos, usa-se moeads.
            if (divisor == 100) { // Mostra que passa-se a mostrar moeadas a partir do maior valor de moeda
                printf("MOEDAS:\n");
            }
            printf("%d moeda(s) de R$ %.2lf\n", qtd, divisor_formatado);
        }
        valor = valor % divisor; // valor remanescente a ser dividido em notas e moedas
        // Altera o valor da variável do loop for
        /* 50 reais, 5 reais e 25 centavos são os três únicos valores cujo próximo valor em ordem decrescente é
        dado por uma divisão por 2.5 */
        if (divisor == 5000 || divisor == 500 || divisor == 25) {
            divisor /= 2.5;
        }
        /* 5 centavos é o único valor cujo próximo valor em ordem decrescente é dado por divisão de 5 */
        else if (divisor == 5)
        {
            divisor = 1;
        }
        else { // Todos os outros casos tem o valor seguinte dado por uma divisão por 2
            divisor /= 2;
        }
    }
    
    return 0;
}