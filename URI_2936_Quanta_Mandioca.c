#include <stdio.h>
 
int main() {
    int qtd_porcoes_curupira, qtd_porcoes_boitata, qtd_porcoes_boto, qtd_porcoes_mapinguari, qtd_porcoes_iara;
    scanf("%d\n%d\n%d\n%d\n%d", &qtd_porcoes_curupira, &qtd_porcoes_boitata, &qtd_porcoes_boto, &qtd_porcoes_mapinguari ,&qtd_porcoes_iara);
    int total_mandioca = 0, i;
    total_mandioca += qtd_porcoes_curupira * 300;
    total_mandioca += qtd_porcoes_boitata * 1500;
    total_mandioca += qtd_porcoes_boto * 600;
    total_mandioca += qtd_porcoes_mapinguari * 1000;
    total_mandioca += qtd_porcoes_iara * 150;
    total_mandioca += 225;
    printf("%d\n", total_mandioca);
 
    return 0;
}