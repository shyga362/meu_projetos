#include <stdio.h>

int main(){

    int num, ant, suc;

    printf("Digite um numero:");
    scanf("%d", &num);

    suc = num + 1;
    ant = num -1;

    printf("\n o antecessor e: %d", ant);
    printf("\n o sucessor e: %d", suc);

    return(0);


}

