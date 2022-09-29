#include <stdio.h>

int main(){

    char respostas[5][10], gabarito[10];
    int i , j, resultado[5], pontuacao = 0;

    for (i = 0; i < 10; i++){
        printf("Insira o gabarito da questao %d (em minusculas): ", i+1);
        scanf("%c%*C", &gabarito[i]);

        while (gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd'  && gabarito[i] != 'e' ){
            printf("Erro! Alternativa nao reconhecida. Insira novamente: ");
            scanf("%c%*C", &gabarito[i]);
        }
    }
    for (i = 0; i < 5; i++){
            printf("\n=======================\nALUNO %d\n=======================\n", i+1);
        for (j = 0; j < 10; j++){
            printf("Insira a alternativa escolhida na questao %d (em minusculas): ", j+1);
            scanf("%c%*C", &respostas[i][j]);

            while (respostas[i][j] != 'a' && respostas[i][j] != 'b' && respostas[i][j] != 'c' && respostas[i][j]!= 'd'  && respostas[i][j] != 'e' ){
                printf("Erro! Alternativa nao reconhecida. Insira novamente: ");
                scanf("%c%*C", &respostas[i][j]);
            }

            if (respostas[i][j] == gabarito[j]){
                pontuacao++;
            }
        }

        resultado[i] = pontuacao;
        pontuacao = 0;
    }

    printf("\nRelacao das pontuacoes: \n");

    for (i = 0; i < 5; i++){
        printf("\nALUNO %d: %d", i+1, resultado[i]);
    }

    return 0;
}
