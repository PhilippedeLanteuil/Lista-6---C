#include <stdio.h>

int main(){

    int soma[3] = {0, 0, 0}, matriz[3][3], i, j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Insira um valor para a posicao (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("  %d  ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            soma[i] += matriz[j][i];
        }
    }

    printf("\nVetor soma: \n");

    for (i = 0; i < 3; i++){
        printf(" %d ", soma[i]);
    }

    return 0;
}
