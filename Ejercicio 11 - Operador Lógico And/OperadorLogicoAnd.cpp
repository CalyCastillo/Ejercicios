#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	
	int a = 5;
	int b = 10;
	int c = 7;
	
	if (a>b && a>c){
		cout<<"A es el mayor: "<< a;
	} else if (b>a && b>c){
		cout<<"B es el mayor: "<< b;
	} else {
		cout<<"C es el mayor: "<< c;
	}
	
	return 0;
}
