#include <stdio.h>

int cobranca ()
{
int pagamento;
	printf ("Pague \n");
	printf ("1- Dinheiro \n");
	printf ("2- Cart�o de cr�dito/d�bito \n");
	printf ("3- Cheque \n");
	scanf ("%i", &pagamento);
	
	//armazenar� informa��es na tabela DAT de acordo com escolha do cliente
	switch (pagamento)
	{
		case 1: printf(". \n");
		break;
		case 2: printf(".. \n");
		break;
		case 3: printf("... \n");
		break;
		default: printf(".... \n");
	}
	return pagamento;
}
