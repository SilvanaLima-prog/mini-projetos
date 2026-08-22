#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int valor,i,quebra;

int main(){
 setlocale(LC_ALL, "Portuguese");

 puts("\nDigite um  sobre o  qual deseja iniciar a contagem regressiva:\n");
 scanf("%d",&valor);
 puts("\n");

 if(valor != 0){
        printf("%d ",valor);
 for(i = 1; i <= valor; i++){

        printf("%d ",valor-i);
                quebra = i % 5;
        if(quebra == 0){

        puts("\n");
        }
  }
}}
