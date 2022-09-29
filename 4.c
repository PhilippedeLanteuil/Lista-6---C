#include <stdio.h>

int main(){

    int vetor_original[15], vetor_modificado[15], i;

    for (i = 0; i < 15; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%d", &vetor_original[i]);

        if (vetor_original[i] < 0){
            vetor_modificado[i] = 0;
        }
        else{
            vetor_modificado[i] = vetor_original[i];
        }
    }

    printf("\nVetor original: ");

    for (i = 0; i < 15; i++){
        printf(" %d ", vetor_original[i]);
    }

    printf("\nVetor modificado: ");

    for (i = 0; i < 15; i++){
        printf(" %d ", vetor_modificado[i]);
    }

    return 0;
}
