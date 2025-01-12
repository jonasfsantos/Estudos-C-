#include<stdio.h>
#include<stdlib.h>
int main ()
{

  int **matriz;
  int i;
  int j;
  int L;
  int C;


  printf("Informar numero de linhas :   ");
  scanf("%d",L);
  printf("Informar numero de Colunas :  ");
  scanf("%d",C);

  matriz =(int **)malloc(matriz*sizeof(int*));

  for(i=0;i<L;i++)
      {
         matriz[i]=(int **)malloc(C*sizeof(int*));

      }

      for (i=0;i<L;i++){

         for(j=0;j<C;j++){

            matriz[i][j]= i + j;
        }
      }
   for (i=0;i<L;i++){

       for (j=0;j<C;j++){

           printf("%d",matriz[i][j]);

       }
       printf("\n");

   }

   for(i=0;i<L;i++){

       free (matriz[i]);
   }

    free(matriz);
    matriz = NULL;

    return 0;

}
