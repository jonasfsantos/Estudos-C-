#include<stdio.h>
#include<stdlib.h>

typedef struct Veiculo{
       char modelo ;
       char cor;
       char placa;
       int ano;
       int valor;
};


void cadVeiculo ()
   {
    for (i=0;i<n;i++){

       printf("Informar Modelo Veiculo ");
       scanf("%s",&Veiculo[i].modelo);

       printf("Informar Cor : ");
       scanf("%s",&Veiculo[i].cor);

       printf("Informar Placa :  ");
       scanf("%s",&Veiculo[i].placa);

       printf("Informar Ano :  ");
       scanf("%d",&Veiculo[i].ano);

       printf("Informar Valor : ");
       scanf("%d",Veiculo[i].valor);


    }
   }

void AlterarVeiculo(int *x)
   {   char p;
       prinft("Informar Placa Veiculo ")
       scanf("%s",&p);

       if ( x == Veiculo.placa)
          {

            cadVeiculo() ;

          }

   }

int main ()
{

       cadVeiculo();
       Veiculo Cadastro[100];
       AlterarVeiculo(&Cadastro);


    return 0;
}
