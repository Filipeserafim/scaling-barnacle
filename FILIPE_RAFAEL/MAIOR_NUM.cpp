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
