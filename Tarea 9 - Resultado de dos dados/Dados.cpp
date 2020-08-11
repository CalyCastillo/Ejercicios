#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int dado1 = 0;
	int dado2 = 0;
	
	srand(time(NULL));
	
		dado1 = rand() % 6 + 1; 
		cout<< "Numero del primer dado: "<<dado1;
		cout<<endl;
		dado2 = rand() % 6 + 1;
		cout<<"Numero del segundo dado: "<<dado2;

	return 0;
}
