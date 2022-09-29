#include <stdio.h>

int main(){

    int vetor[15], vetor_par[15], vetor_impar[15], i, cont_par = 0, cont_impar = 0;

    for (i = 0; i < 15; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0){
            vetor_par[cont_par] = vetor[i];
            cont_par++;
        }
        else{
            vetor_impar[cont_impar] = vetor[i];
            cont_impar++;
        }
    }

    printf("\nValores do vetor inicial: ");

    for (i = 0; i < 15; i++){
        printf(" %d ", vetor[i]);
    }

    printf("\nValores pares inseridos: ");

    for (i = 0; i < cont_par; i++){
        printf(" %d ", vetor_par[i]);
    }

    printf("\nValores impares inseridos: ");

    for (i = 0; i < cont_impar; i++){
        printf(" %d ", vetor_impar[i]);
    }

    return 0;
}
