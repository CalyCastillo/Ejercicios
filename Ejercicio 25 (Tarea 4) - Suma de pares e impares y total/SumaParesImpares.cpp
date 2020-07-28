#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){

	int pares = 0;
	int impares = 0;
	int sumaParImpar = 0;

	for (int i = 1; i < 11; i++)
	{
		if (i%2 == 0){
			pares= pares + i;
		}
		cout<<i<< " ";
		
		if (i%2 != 0){
			impares= impares + i;
		}
	}
	sumaParImpar= pares + impares;
	cout<<endl;
	cout<<endl;
	cout<<"Total Pares: "<<pares<<endl;
	cout<<"Total Impares: "<<impares<<endl;
	cout<<"Total de la suma entre pares e impares: "<<sumaParImpar<<endl;
		
	return 0;
}
