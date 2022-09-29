#include <stdio.h>

int main(){

    int vetor_a[10], vetor_b[10], vetor_interseccao[10], i, j, k, achei = 0, cont = 0;

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
        for (j = 0; j < 10; j++){
            if (i == 0){
                if (vetor_a[i] == vetor_b[j]){
                    vetor_interseccao[cont] = vetor_a[i];
                    cont++;
                }
            }
            else{
               if (vetor_a[i] == vetor_b[j]){
                    for (k = 0; k < cont; k++){
                        if (vetor_a[i] == vetor_interseccao[k]){
                            achei = 1;
                        }
                    }

                    if (achei != 1){
                        vetor_interseccao[cont] = vetor_a[i];
                        cont++;
                    }

                    achei = 0;
               }
            }
        }
    }
    printf("\nValores contidos no vetor interseccao: \n");

    for (i = 0; i < cont; i++){
        printf(" %d ", vetor_interseccao[i]);
    }

    return 0;

}
