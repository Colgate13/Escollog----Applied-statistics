#ifndef _ESCOLLOG_H_
#define _ESCOLLOG_H_

	float funcaoCalculoFr_Para_fi(float fr, float n);//Função para encontrar o fi pelo Fr

	float funcaoCalculo_fi_para_alfa(float fi);//Função para encontrar o alpha pelo fi

	int funcao_Para_FrAC(int fr0 ,int fr1);//Função para Fr acumulado

	float funcao_Para_frAC(float fr ,float fr1);//Função para fr acumulado

	// 2²° Bimestre
	
	float funcao_Para_K(int Ninput);//Função para encontrar o K, formula: (1 + 3.22) * log10(N)

	float funcao_Para_At(int Maior, int Menor, float K);//Funçao para encontrar o At utilizando K e o roll

#endif

#include <math.h>//Inclusão da biblioteca math.h

float funcaoCalculoFr_Para_fi(float fr, float n)
{
 	return (fr * 100) / n;
}

float funcaoCalculo_fi_para_alfa(float fi)
{
	return (fi * 360) / 100;
}

int funcao_Para_FrAC(int fr0 ,int fr1)
{
	return fr0 + fr1;
}

float funcao_Para_frAC(float fr ,float fr1)
{
	return fr + fr1;
}

float funcao_Para_K(int Ninput)
{
  	 float Kinterno = (1 + 3.22) * log10 (Ninput);
  	return Kinterno;
}

float funcao_Para_At(int Maior, int Menor, float K)
{
	return (Maior - Menor) / K;
}
