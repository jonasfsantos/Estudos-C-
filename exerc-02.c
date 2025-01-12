#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;

   int i;
   int *v;

   printf("Informe o tamanho do vetor :   ");
   scanf("%d",&n);
   v=(int*)malloc(n*sizeof(int));

   for(i=0;i<=n;i++)
   {
      printf("Digite :  ");
      scanf("\n%d",&v[i]);
   }

 for(i=0;i<=n;i++)
     {

       printf ("\n%d",v[i]);

     }


return 0;

}
