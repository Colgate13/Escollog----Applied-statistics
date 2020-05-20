#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int i;
int x;

int main()
{
   int FrS[5];
   int N;
   printf("Indique o N: ");
   scanf("%d", &N);
   
   printf("Indique o Quantas pessoas destestaram:\n");
   scanf("%d", &FrS[0]);
   printf("Indique o Quantas pessoas Nao Gostaram:\n");
   scanf("%d", &FrS[1]);
   printf("Indique o Quantas pessoas foram indiferentes:\n");
   scanf("%d", &FrS[2]);
   printf("Indique o Quantas pessoas Gostaram:\n");
   scanf("%d", &FrS[3]);
   printf("Indique o Quantas pessoas Adoraram:\n");
   scanf("%d", &FrS[4]);


   N = FrS[0] + FrS[1] + FrS[2] + FrS[3] + FrS[4];

   float FrResultadoP_fi[5];
        for(i = 0; i < 5; i++)
        {
                FrResultadoP_fi[i] = funcaoCalculoFr_Para_fi(FrS[i],N);
        }


   float AlfaResultado[5];
   for (i = 0; i < 5; i++)
   {
        AlfaResultado[i] = funcaoCalculo_fi_para_alfa( FrResultadoP_fi[i]);
   }
   
   
   int Resultadofuncao_Para_FrAC[5];
   Resultadofuncao_Para_FrAC[0] =  funcao_Para_FrAC(0,FrS[0]);
x = 0;
for (i = 1; i < 5; i++)
{ 
   Resultadofuncao_Para_FrAC[i] =  funcao_Para_FrAC(FrS[i], Resultadofuncao_Para_FrAC[x]);
   x++;
}

   float Resultadofuncao_Para_frAC[5];   
   Resultadofuncao_Para_frAC[0] =  funcao_Para_frAC(0,FrResultadoP_fi[0]);
   Resultadofuncao_Para_frAC[1] =  funcao_Para_frAC(FrResultadoP_fi[1], Resultadofuncao_Para_frAC[0]);
   Resultadofuncao_Para_frAC[2] =  funcao_Para_frAC(FrResultadoP_fi[2], Resultadofuncao_Para_frAC[1]);
   Resultadofuncao_Para_frAC[3] =  funcao_Para_frAC(FrResultadoP_fi[3], Resultadofuncao_Para_frAC[2]);
   Resultadofuncao_Para_frAC[4] =  funcao_Para_frAC(FrResultadoP_fi[4], Resultadofuncao_Para_frAC[3]);

   
    printf(" | K |  Variaveis    |    Fr  |   Fr'  |   fi%%      |    fi'      |  Alfa �   |\n");
    printf(" | 1 |  Detestei     |    %d  |   %d   |   %.2f%%    |   %.2f%%    |    %.2f   |\n", FrS[0], Resultadofuncao_Para_FrAC[0] ,FrResultadoP_fi[0], Resultadofuncao_Para_frAC[0] ,AlfaResultado[0] );
    printf(" | 2 |  Nao Gostei   |    %d  |   %d   |   %.2f%%    |   %.2f%%    |    %.2f   |\n", FrS[1], Resultadofuncao_Para_FrAC[1] ,FrResultadoP_fi[1], Resultadofuncao_Para_frAC[1] ,AlfaResultado[1] );
    printf(" | 3 |  Indiferente  |    %d  |   %d   |   %.2f%%    |   %.2f%%    |    %.2f   |\n", FrS[2], Resultadofuncao_Para_FrAC[2] ,FrResultadoP_fi[2], Resultadofuncao_Para_frAC[2] ,AlfaResultado[2] );
    printf(" | 4 |  Gostei       |    %d  |   %d   |   %.2f%%    |   %.2f%%    |    %.2f   |\n", FrS[3], Resultadofuncao_Para_FrAC[3] ,FrResultadoP_fi[3], Resultadofuncao_Para_frAC[3] ,AlfaResultado[3] );
    printf(" | 5 |  Adorei       |    %d  |   %d   |   %.2f%%    |   %.2f%%    |    %.2f   |\n", FrS[4], Resultadofuncao_Para_FrAC[4] ,FrResultadoP_fi[4], Resultadofuncao_Para_frAC[4] ,AlfaResultado[4] );
    printf(" |   |   N = %d      |        |        |\n", N);

    system("pause");
    return 0;
}
