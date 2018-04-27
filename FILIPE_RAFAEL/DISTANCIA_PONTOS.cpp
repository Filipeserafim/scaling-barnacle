/*/*ESCOLA POLITÉCNICA PUCRS
PROGRAMAÇÃO II
Marco Mang

Escreva uma função distance que calcula a distância entre dois pontos (x1, y1) e (x2, y2).
Todos os números e valores de retorno devem
ser do tipo double

DUPLA: FILIPE_RAFAEL*/



#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x1, y1, x2, y2, gdistance;

	cout<<"Entre com x1: ";
	cin>>x1;
	cout<<"Entre com y1: ";
	cin>>y1;
        cout<<"Entre com x2: ";
	cin>>x2;
	cout<<"Entre com y2: ";
	cin>>y2;

	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

	cout <<"A distancia entre dois pontos eh: " << sqrt((gdistance))<<endl;


	return 0;
}
