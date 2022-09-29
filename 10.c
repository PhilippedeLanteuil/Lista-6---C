#include <stdio.h>

int main(){

    int numeros[10], i = 0, j;

    while (i < 10){

        printf("Insira o %do numero: ", i+1);
        scanf("%d", &numeros[i]);

        if (i > 0){

            for (j = 0; j < i; j++){

                while (numeros[i] == numeros[j]){
                    printf("Numero repetido! Por favor, insira um novo valor: ");
                    scanf("%d", &numeros[i]);

                    j = 0;
                }
            }
        }

        i++;
    }

    printf("\nNumeros inseridos:\n");
    for (i = 0; i < 10; i++){
        printf(" %d ", numeros[i]);
    }

    return 0;
}
