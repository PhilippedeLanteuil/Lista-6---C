#include <stdio.h>

int main(){

    int matriz[4][4], i, j;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            matriz[i][j] = i * j;
            printf("  |%d|  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

