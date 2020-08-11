#include <iostream> 
#include <math.h> 
  
using namespace std; 
  
int main() 
{ 
  int numero;
  float raiz; 
  
  cout << "Ingrese un numero para obtener su raiz cuadrada: "; 
  cin >> numero; 
  
  raiz = sqrt(numero); 
  
  cout << "La raiz cuadrada de " << numero << " es " << raiz << endl; 
  system("pause");
  
  return 0; 
} 
