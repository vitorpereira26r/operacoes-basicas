#include <iostream>
#include <cmath>
using namespace std;

int main (){
  int produtos, luxo, comum1, comum, resto;
  cin>>produtos;
  
  luxo = produtos / 3;
  comum = (produtos * 2) / 3;
  resto = produtos - comum - luxo;
  comum1 = comum + resto;

cout<<comum1<<endl<<luxo<<endl;

  return 0;
}