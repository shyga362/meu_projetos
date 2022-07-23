#include <stdio.h>

int main(){
    float dep, taxa, rendi, total;

    printf("\nDigite o valor do deposito: ");
    scanf("%f", &dep);
    printf("\nInformea taxa de juros: ");
    scanf("%f", &taxa);
    
    rendi = dep * (taxa/100);
    total = dep + rendi;
    printf("\n O rendimento e: %.2f", rendi);
    printf("O total e: %.2f",total);

    return(0);
}