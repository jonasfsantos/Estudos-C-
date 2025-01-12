#include<stdio.h>
#include<stdlib.h>

int main()
{   int a;
    int b;
    int *p;
    int *q;

    printf("Informar Valor :  ");
    scanf("%d",&a);

    printf("Informar segundo valor :  ");
    scanf("%d",&b);

    p=(int *)malloc(sizeof(int));
    *p = a;
    q=(int*)malloc(sizeof(int));
    *q = b;


    printf("\n%d",*p);

    printf("\n%d",*q);


  return 0;

}
