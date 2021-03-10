/*
  Arquivo: JoaoFilipeGarcia_Programa3.c
  Autor: Joao Filipe Garcia
         Gabriel batocchio conde de oliveira
         Lucas Guitti Bonando
         Alexandre Silveira Jozala
  Date: 10/03/21 19:32
  Descricao: Este programa demonstra todas as possibilidades 
  de escolhas de 3 produtos, e o valor total dos 3 produtos.
*/

#include <stdio.h>

int main()
{
	int peso[9]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int N=12;
	printf("N = %d\n\n", N);
	int x, y, z, valor;
	for(x=0;x<7;x++)
	{
		for(y=x+1;y<8;y++)
		{
			for(z=y+1;z<9;z++)
			{
				if((peso[x]+peso[y]+peso[z])==N)
				{	
					valor = 3*peso[x] + 2*peso[y] + peso[z];
					printf("x = %d  y = %d  z = %d      Valor = %d\n",peso[x],peso[y],peso[z],valor);
				}
			}
		}
	}
	
		printf("\n FIM \n");

return 0;
}
