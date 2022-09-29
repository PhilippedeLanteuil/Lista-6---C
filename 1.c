#include <stdio.h>

int main(){

    int i;
    float vetor_inicial[10], vetor_quadrado[10];

    for (i = 0; i < 10; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%f", &vetor_inicial[i]);

        vetor_quadrado[i] = vetor_inicial[i] * vetor_inicial[i];
    }

    printf("\nQuadrado dos numeros inseridos: ");

    for (i = 0; i < 10; i++){
        printf("|%2.4f| ", vetor_quadrado[i]);
        if (i == 5){
            printf("\n");
        }
    }

    return 0;
}
