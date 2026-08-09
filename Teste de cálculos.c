#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");

	char soma = '+';
	char sub= '-';
	char div= '/';
	char mult= '*';
	char operador[20];

	int valor1, valor2 , resultado;
	printf("Digite o primeiro valor:\n");
	scanf("%d" ,&valor1);

	printf("Digite o segundo valor:\n");
	scanf("%d" ,&valor2);


	printf("Qual operador voce deseja utilizar?\n");
	printf("%c, %c, %c, %c ?\n",soma,sub,mult,div);
	scanf("%s",&operador);




	 if(strcmp(operador, "+") == 0 ){

	 	 resultado= valor1 + valor2;
	 	printf("Resultado: %d\n",resultado);



	 	}


	 if(strcmp(operador, "-")==0){

	 	resultado= valor1 - valor2;
	 	printf("Resultado: %d\n",resultado);
	 	}



	 if(strcmp(operador, "/")==0){

	 	if( valor1 > valor2 ){
	 	resultado= valor1 / valor2;
	 	printf("Resultado: %d\n",resultado);}
        else{
        printf("Não é possível realizar a divisão dos inteiros!");
	 	}}



	 if(strcmp(operador, "*")==0){

	 	resultado= valor1 * valor2;
	 	printf("Resultado: %d\n",resultado);
	 	}



}
