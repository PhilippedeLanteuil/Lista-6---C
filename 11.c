#include <stdio.h>

int main(){

    int matriz[4][4], numeros_maiores[16], i, j, cont = 0;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Insira um valor para a posicao (%d, %d) da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 10){
                numeros_maiores[cont] = matriz[i][j];
                cont++;
            }
        }
    }

    printf("\nNumeros inseridos maiores do que 10: ");

    for (i = 0; i < cont; i++){
        printf(" %d ", numeros_maiores[i]);
    }

    printf("\nTotal: %d\n", cont);

    return 0;
}
