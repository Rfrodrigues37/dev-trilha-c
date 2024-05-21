#include <stdio.h>
#include <stdlib.h>
/*Exemplo de função com retorno de valores*/
String cout;


int main () {
 for (int i=1; i<=5; i++){
  int n=1 + rand()  % 9;
  if (n % 2 == 0)
     cout << n << "eh par!";
    // << end1;
  else   
    cout << n << "eh impar!";
    //<< end1;
 }
    
}

