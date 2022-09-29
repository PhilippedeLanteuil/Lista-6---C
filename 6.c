#include <stdio.h>

int main(){

    int codigo, i;
    float vetor[5];

    for (i = 0; i < 5; i++){
        printf("Insira o valor do %do numero: ", i+1);
        scanf("%f", &vetor[i]);
    }

    printf("\nInsira o codigo da operacao que deseja realizar: ");
    printf("\n0 - Encerrar o programa.\n1 - Mostrar os numeros inseridos na ordem direta.\n2 - Mostrar os numeros inseridos na ordem inversa.");
    printf("\nSua opcao: ");
    scanf("%d", &codigo);

    printf("\n");

    switch(codigo){
        case 0:
            printf("\nPrograma encerrado!");
            break;
        case 1:
            for (i = 0; i < 5; i++){
                printf(" %.2f ", vetor[i]);
            }
            break;
        case 2:
            for (i = 4; i >= 0; i--){
                printf(" %.2f ", vetor[i]);
            }
            break;
        default:
            printf("Codigo invalido!");
            break;
    }

    return 0;
}
