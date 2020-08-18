#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
	srand(time(NULL));
	
	int numeros[5][5];
	int suma;
	int i, j;
	int max;
	
	cout << "Determine el maximo valor a mostrar en la tabla: ";
	cin >> max;
	
	cout << endl;

    for (int i = 0; i < 5; i++)
    {
    	for (int j = 0; j < 5; j++)
    	{
        numeros[i][j] = rand() % max + 1;
        
        cout << "  |  " << numeros[i][j] << "  |  " << " ";
    	}
    	cout<<endl;   
    }
        for (int i = 0; i < 5; i++)
    {
    	for (int j = 0; j < 5; j++)
    	{
    	suma = suma + numeros[i][j];
    	}
	}
    cout << endl;
    
    cout<<"Total Suma: " << suma;
	  
    return 0;
}
