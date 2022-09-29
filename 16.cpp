#include <stdio.h>

int main(){

    int matriz_a[4][4], matriz_b[4][4], matriz_c[4][4], i, j;

    printf("\nCom relacao a primeria matriz: \n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Insira um valor para a posicao (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    printf("\nCom relacao a segunda matriz: \n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Insira um valor para a posicao (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz_b[i][j]);
        }
    }


    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz_a[i][j] > matriz_b[i][j]){
                matriz_c[i][j] = matriz_a[i][j];
            }
            else if (matriz_a[i][j] == matriz_b[i][j]){
                    matriz_c[i][j] = matriz_a[i][j];
            }
            else{
               matriz_c[i][j] = matriz_b[i][j];
            }
        }
    }

    printf("\nMatriz com os maiores numeros de cada posicao: \n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("  %d  ", matriz_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
