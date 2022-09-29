#include <stdio.h>

int main(){

    int i, j, cont_1 = 0, cont_2 = 0, cont_3 = 0, posicao;
    float notas[5][3], menor;

    for (i = 0; i < 5; i++){
        printf("\nALUNO %d:\n", i+1);
        for (j = 0; j < 3; j++){
            printf("Insira a %da nota: ", j+1);
            scanf("%f", &notas[i][j]);

            if (j == 0){
                menor = notas[i][j];
                posicao = j;
            }
            else{
                if (notas[i][j] < menor){
                    menor = notas[i][j];
                    posicao = j;
                }
            }
        }

        switch(posicao){
            case 0:
                cont_1++;
                break;
            case 1:
                cont_2++;
                break;
            case 2:
                cont_3++;
                break;
        }

        posicao = 0;
        printf("\n");
    }

    printf("Quantidade de alunos cuja menor nota foi na prova: ");
    printf("\n1: %d\n2: %d\n3: %d\n", cont_1, cont_2, cont_3);

    return 0;
}
