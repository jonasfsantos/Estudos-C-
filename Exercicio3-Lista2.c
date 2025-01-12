#include<stdio.h>

typedef struct Cliente{
        char nome[40];
        int idade;
        char telefone;
};
int main(){
   int i;
   int n;
   int *p;

    printf("Informar numero de Clientes :   ");
    scanf("%d",&n);

    p=(Cliente*)malloc(n*sizeof(Cliente));

   for(i=0;i<n;i++){
      printf("Informar nome do Cliente :  ");
      scanf("%s",p[i].nome);

      printf("Informar Idade :  ");
      scanf("%d",p[i].idade);

      printf("Informar Telefone :  ");
      scanf("%s",p[i].telefone);

   }

   for(i=0;i<n;i++)
   {
      printf(" \n Nome Cliente  :   ",Cliente.nome);
      printf("\n Idade :  ",Cliente.idade);
      printf("\n Telefone",Cliente.telefone);

   }

return 0;
}
