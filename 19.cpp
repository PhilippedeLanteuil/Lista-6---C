#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int a[5][5], cont, i, j, c, l;

  srand(time(NULL));


    // Preencher a matriz com valores n repitidos o "do/while" compararia td os valores da matriz e caso tenha repeticao aumemta um contador q executa o looping

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            do{   
                cont=0;
                a[i][j]=rand()%99;

                for (l=0;l<5;l++){
                    for (c=0;c<5;c++){
                      if (a[i][j]==a[l][c] && (i!=l && j!=c)){
                      cont++;
                      }
                    }
                }
             } while(cont!=0);
        }
    }

                for (l=0;l<5;l++)
                {
                    for (c=0;c<5;c++)
                    {
                       printf(" \t %d ", a[l][c]);
                    }
                    printf("\n");
                }
    return 0;
}
