#include <stdio.h>

int main(){

    int vetor[8], i, x, y, soma = 0;

    for (i = 0; i < 8; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nInsira um valor para x, e em seguida para y: ");
    scanf("%d %d", &x, &y);

    x -= 1;
    y -= 1;

    printf("\nSoma entre os numeros %d e %d: %d\n", vetor[x], vetor[y], vetor[x] + vetor[y]);



    return 0;
}
