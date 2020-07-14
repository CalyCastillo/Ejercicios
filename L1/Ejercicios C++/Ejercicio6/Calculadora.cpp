#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a=0;
	int b=0;
	int suma, resta, mult, div;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	suma=a+b;
	resta=a-b;
	mult=a*b;
	div=a/b;
	cout<<"El resultado de la suma es: "<<suma<<endl;
	cout<<"El resultado de la resta es: "<<resta<<endl;
	cout<<"El resultado de la multiplicacion es: "<<mult<<endl;
	cout<<"El resultado de la division es: "<<div<<endl;
	return 0;
}
