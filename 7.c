#include <stdio.h>

int main(){

    int vetor_a[10], vetor_b[10], vetor_c[20], i, j = 0;

    printf("Para o vetor A, insira: \n");

    for (i = 0; i < 10; i++){
        printf("Um valor para a posicao %d: ", i+1);
        scanf("%d", &vetor_a[i]);

        vetor_c[j] = vetor_a[i];
        j += 2;
    }


    printf("\nPara o vetor B, insira: \n");

    j = 1;

    for (i = 0; i < 10; i++){
        printf("Um valor para a posicao %d: ", i+1);
        scanf("%d", &vetor_b[i]);

        vetor_c[j] = vetor_b[i];
        j += 2;
    }

    printf("\nValores inseridos no vetor A e no Vetor B: \n");

    for (i = 0; i < 20; i++){
        printf(" %d ", vetor_c[i]);
    }

    return 0;
}
