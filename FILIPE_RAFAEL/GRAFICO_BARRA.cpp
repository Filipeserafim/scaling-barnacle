/*ESCOLA POLITÉCNICA PUCRS
PROGRAMAÇÃO II
Marco Mangan

Uma aplicação interessante dos computadores são os desenhos de gráficos e gráficos de barras. Escreva um programa que lê cinco números
(cada um entre 1 e 30). Suponha que o usuário insira apenas valores válidos. Para cada número lido, seu programa deve imprimir uma
linha contendo esse número de asteriscos adjacentes. Por exemplo, se seu programa lê o número 7, ele deve imprimir ******* .

DUPLA: FILIPE_RAFAEL*/

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

