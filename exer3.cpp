#include <iostream>

using namespace std;

int main (){

  float salario_reais, salario_euro, salario_libra, salario_dolar, euro, dolar, libra;
  dolar = 1/2.13;
  euro = 1/2.84;
  libra = 1/3.34;

  //receber o salario em reais
  cin>>salario_reais;

  //calcular o salario nas outras moedas
  salario_dolar = salario_reais * dolar;
  salario_euro = salario_reais * euro;
  salario_libra = salario_reais * libra;
  cout<<salario_dolar<<endl;
  cout<<salario_euro<<endl;
  cout<<salario_libra<<endl;

  return 0;
}