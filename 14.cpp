#include <stdio.h>

int main(){

    int matriz[4][4], i, j, maior, linha_maior, coluna_maior;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Insira um valor para a posicao (%d, %d) da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0){
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
            else{
                if (matriz[i][j] > maior){
                    maior = matriz[i][j];
                    linha_maior = i;
                    coluna_maior = j;
                }
            }
        }
    }

    printf("\nMaior valor lido: %d.\nSua posicao: (%d, %d)\n", maior, linha_maior+1, coluna_maior+1);


    return 0;
}

