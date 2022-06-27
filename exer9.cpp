#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){

  int horas, minutos, milisegundos, resto1, resto2;
  float segundos;

  cin>>milisegundos;
  horas = milisegundos / 3600000;
  resto1 = milisegundos % 3600000;
  minutos = resto1 / 60000;
  resto2 = resto1 % 60000;
  segundos = resto2 / 1000;
  cout<<setprecision(1)<<fixed;
  cout<<horas<<" : "<<minutos<<" : "<<segundos<<endl;

  
  return 0;
}