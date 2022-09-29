#include <stdio.h>

int main(){

    int vetor[10], i, maior, menor, posicao_maior, posicao_menor;

    for (i = 0; i < 10; i++){
        printf("Insira um valor para o %do numero: ", i+1);
        scanf("%d", &vetor[i]);

        if (i == 0){
            maior = vetor[i];
            posicao_maior = i;
            menor = vetor[i];
            posicao_menor = i;
        }
        else{
            if (vetor[i] > maior){
                maior = vetor[i];
                posicao_maior = i;
            }
            if (vetor[i] < menor){
                menor = vetor[i];
                posicao_menor = i;
            }
        }
    }

    printf("\nNumeros inseridos: ");

    for (i = 0; i < 10; i++){
        printf(" %d ", vetor[i]);
    }

    printf("\n=========================================================");
    printf("\nMaior valor: %d. Sua posicao: %d.\nMenor valor:  %d. Sua posicao: %d.\n", maior, posicao_maior+1, menor, posicao_menor+1);

    return 0;
}
