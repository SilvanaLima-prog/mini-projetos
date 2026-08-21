#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int numero,i,multiplicado;

//x== 20 e i==0; resultado == 0;
int resultado(int x, int y ){
    int mult = x * y;
 return mult;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\nBEM-VINDO AO TABULADOR!\n");
    printf("\nDigite o número do qual queira ver a tabuada.\n");
    scanf("%d",&numero);

    // numero ==20 e i==0;

    for(i=0;i<=10;i++){
            //multiplicado == 0;
        multiplicado = resultado(numero,i);
        // 20 * 0 = 0;
        printf("\n%d * %d = %d\n",numero,i,multiplicado);
    }
    return 0;
}
