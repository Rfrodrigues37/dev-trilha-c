#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;
    int *ponteiro;

    num = 15;
    ponteiro = &num;

    printf("\n O valor da variavel num = %i", num);
    printf("\n O valor do ponteiro = %i", ponteiro);
    printf("\n O Endereco da variaval num = %i", &num);

    return 0;
}