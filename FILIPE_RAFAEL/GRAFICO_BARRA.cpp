#include <iostream>

using namespace std;

int main ()
{
   int number; 
   int i;

   cout << "DIGITAR 5 NUMEROS QUE ESTEJA ENTRE O INTERVALO DE 1 À 30 : " << endl;

   
   for ( i = 1; i <= 5; i++ ) 
   {
	  cin >> number; // Verifica qual o numero digitado

      for ( int j = 1; j <= number; j++ ) //Plota o Gráfico com os "*" conforme o valor digitado
         cout << '*';

      cout << endl;
   } 

   cout << endl;
   return 0;
} 

