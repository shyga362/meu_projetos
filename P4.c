#include <stdio.h>
#include <math.h>

int main(){

    float total, n1, n2;

    printf("\n Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("\n Digite o segundo numero: ");
    scanf("%f", &n2);

    total = pow(n1, n2);
    
    printf("\n %.2f elevado a %.2f e: %.2f", n1, n2, total);

    return(0);

}