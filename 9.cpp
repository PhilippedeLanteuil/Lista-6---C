#include <stdio.h>

int main(){

    int vetor_a[10], vetor_b[10],  vetor_uniao[20], i, j, k, achei = 0, cont = 0;

    printf("\nCom relacao ao primeiro vetor: \n");

    for (i = 0; i < 10; i++){
        printf("Insira um valor para a %da posicao: ", i+1);
        scanf("%d", &vetor_a[i]);
    }

    printf("\nCom relacao ao segundo vetor: \n");

    for (i = 0; i < 10; i++){
        printf("Insira um valor para a %da posicao: ", i+1);
        scanf("%d", &vetor_b[i]);
    }

    for (i = 0; i < 10; i++){
        if (i == 0){
            vetor_uniao[cont] = vetor_a[i];
            cont++;
        }

        else{
            for (k = 0; k < cont; k++){
                if (vetor_a[i] == vetor_uniao[k]){
                    achei = 1;
                }
            }

            if (achei != 1){
                vetor_uniao[cont] = vetor_a[i];
                cont++;
            }

            achei = 0;

            }
        }

    for (i = 0; i < 10; i++){
        for (k = 0; k < cont; k++){
            if (vetor_b[i] == vetor_uniao[k]){
                achei = 1;
            }

        }

        if (achei != 1){
            vetor_uniao[cont] = vetor_b[i];
            cont++;
        }

        achei = 0;

        }

    printf("\nVetor uniao: \n");

    for (i = 0; i < cont; i++){
        printf(" %d ", vetor_uniao[i]);
    }


    return 0;
}


