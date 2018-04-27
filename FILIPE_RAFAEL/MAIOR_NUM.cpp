/*ESCOLA POLITÉCNICA PUCRS
PROGRAMAÇÃO II
Marco Mang

O processo de localizar o maior número (isto é, o máximo de um grupo de valores) é freqüentemente utilizado em aplicativos de com-
putador. Por exemplo, um programa que determina o vencedor de uma competição de vendas insere o número de unidades vendidas por
vendedor. O vendedor que vende mais unidades ganha a competição. Escreva um programa em pseudocódigo, e então um programa em
C++, que utiliza uma instrução while para determinar e imprimir o maior número dos dez números inseridos pelo usuário. Seu programa
deve utilizar três variáveis, como segue:
counter : Um contador para contar até 10 (isto é, monitorar quantos números foram inseridos e determinar quando todos os
10 números foram processados).
number : A entrada numérica atual para o programa.
largest : O maior número encontrado até agora.

DUPLA: FILIPE_RAFAEL*/

#include <iostream>

using namespace std;


int main()
{
   int counter = 0; // Contador até 10, para monitorar os numeros inseridos
   int number; // A entrada numerica
   int largest; // o maior numero encontrado
   
   cout << "Digite um numero inteiro: " << endl; 
   cin >> largest; // Defini o primeiro numero como maior e ir comparando
   
   while ( counter < 10 ) 
   {
      cout << "Digite outro numero inteiro : " << endl;
      cin >> number; // Próximo valor digitado para comparar
      
      if ( number > largest ) // Para comparar qual dos valores digitados é o maior
         largest = number;
			
			counter = counter + 1;
   
   } 
   
   cout << "O maior numero digitado é: " << largest << endl; 
   
   return 0;
}
