#include <stdio.h>
#include <stdlib.h>
/*Exemplo de função com retorno de valores*/

int result; 

int soma () {
    int valor;
    printf("Digite um valor = ");
    scanf("%i", &valor);
 
    valor = valor * 2;
    return valor;

}

int main () {

    result = soma ();
    printf("O valor retornado da funcao = %i" , result);
    return 0;
}

