#include <iostream>
using namespace std;
int main(int argc, char** argv) {

	int numeroSecreto = 7;
	int numero = 0;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if (numero == numeroSecreto){
		cout<<"Adivinaste el numero secreto!";
	} else {
		cout<<"No adivinaste";
	}

	return 0;
}
