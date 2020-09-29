#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "vendas.cpp"
#include "cobranca.cpp"
#include "espera.cpp"
#include "entrega.cpp"


int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	int mainPagamento;
	system("Color 2");
	printf("************************************************** \n");
	printf("Olá! Seja bem vindo ao Mickey & Donald Drive Trhu! \n");
	printf("************************************************** \n");
	
	vendas();
	cobranca();
	//espera();
	//entrega();
	
	system ("pause");
	return 0;
}
