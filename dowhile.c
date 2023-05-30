#include <stdio.h>
#include <stdlib.h>

int main(){

	int num,i; //Declaração da variavel
	
		do{ //executa o DO
			
			printf("Digite um numero inteiro para saber a tabuada:\n"); //Solicitação para entrada de dados
			scanf("%d",&num); //Dado de entrada
			
		} while(num < 1 || num > 10); //executa o laço while
		
			for(i = 1; i <= 10; i++) //Loop for para percorrer a tabuada
				printf("%d x %d = %d\n",num,i, num * i); //Imprime o resultado
		
	system("pause");
	return 0;	
}
