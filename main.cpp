/*
Asignacion #2 suma de dos fracciones
Pablo Campos Méndez
801-22-5170

Pide numeros para dos fracciones y las suma juntas
*/
#include<iostream>
using namespace std;

int main(){
  // escriba su código aquí 
  int num1,num2,den1,den2,sum1,sum2,numf,denf;

  cout << "Ponga el numerador de la 1ra fraccion: ";
  cin >> num1;
  cout << "Ponga el denominador de la 1ra fraccion: ";
  cin >> den1;
  cout << "Ponga el numerador de la 2nda fraccion: ";
  cin >> num2;
  cout << "Ponga el denominador de la 2nda fraccion: ";
  cin >> den2;

  sum1 = num1*den2;
  sum2 = num2*den1;
  numf = sum1+sum2;
  denf = den1*den2;
  cout << "La suma de estas fracciones es:" << numf << "/" << denf << endl;

  return 0;
}
