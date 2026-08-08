
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	srand(time(NULL));//da ao valor semente um valor em segundos diferente todas as vezes em que o programa for reiniciado;
    setlocale(LC_ALL,"");//permite que o compilador entenda caraters do portugu�s;


	//vari�veis
	int numero_aleatorio;//cria vari�vel;
	numero_aleatorio = rand() % 100 + 1;//cria um n�mero aleat�rio do 0 ao 100;
	int palpite;
	char letra;
    int i = 0;
    int tentativa = 1;

    //Perguntas de �nicio do JOgo
    printf("Bem vindo ao JOGO DE ADIVINHA��O\n");
	printf("Voc� tem 10 TENTATIVAS para acertar o n�mero\n");
	printf("Est� pronto?. Se sim, pressione ENTER\n");
	
	//printf("Esse � o n�mero %d\n",numero_aleatorio);
	printf("Tentativa %d:\n", tentativa);
	scanf("%d",&palpite); //armazena o primeiro palpite a veriavel

	do{

		for(i = 2; i <= 10; i++){
			if(palpite > numero_aleatorio){
				printf("O n�mero � MENOR que %d\n",palpite);
				printf("Tentativa %d:\n",tentativa*i);
				scanf("%d",&palpite);
				letra = getchar();
				}else if(palpite < numero_aleatorio){
				printf("O n�mero � MAIOR que %d\n",palpite);
				printf("Tentativa %d:\n",tentativa*i);
				scanf("%d",&palpite);
				letra = getchar();
				}
			}

		}


	while(palpite != numero_aleatorio && i <=  10 );
	if(numero_aleatorio == palpite ){
	printf("Parab�ns! Era esse %d o n�mero.\n",palpite);}

		    if(tentativa * i == 10){
		    	printf("Sorry, mas esse %d n�o era o n�mero, e sim, %d",palpite,numero_aleatorio);



	}}

















