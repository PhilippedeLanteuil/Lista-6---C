#include <stdio.h>

int main(){

    int matriz[5][5], valor, i , j, linha, coluna, achou;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Insira um valor para a posicao (%d, %d) da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Insira um valor para ser buscado na matriz: ");
    scanf("%d", &valor);

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
           if (matriz[i][j] == valor){
                achou = 1;
                linha = i;
                coluna = j;
                i = 4;
                j = 4;
           }
           else{
                achou = 0;
           }
        }
    }

    if (achou == 0){
        printf("\nO numero %d nao foi encontrado!", valor);
    }
    else{
        printf("\nO valor %d foi encontrado na posicao (%d, %d): ", valor, linha+1, coluna+1);
    }
    return 0;
}
