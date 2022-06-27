#include <iostream>
#include <cmath>

using namespace std;

int main (){

  int valor, valor2, valor3, valor4, valor5, valor6, valor7, n100, n50, n20, n10, n5, n2, n1;
  cin>>valor;
  n100 = valor / 100;
  valor2 = valor % 100;
  n50 = valor2 / 50;
  valor3 = valor2 % 50;
  n20 = valor3 / 20;
  valor4 = valor3 % 20;
  n10 = valor4 / 10;
  valor5 = valor4 % 10;
  n5 = valor5 / 5;
  valor6 = valor5 % 5;
  n2 = valor6 / 2;
  valor7 = valor6 % 2;
  n1 = valor7 / 1;


  cout<<n100<<endl<<n50<<endl<<n20<<endl<<n10<<endl<<n5<<endl<<n2<<endl<<n1<<endl;

  return 0;
}