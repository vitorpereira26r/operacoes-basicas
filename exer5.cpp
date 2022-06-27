#include <iostream>

using namespace std;

int main (){
  
  int degrau_cm, alturaescada_m, alturaescada_cm;
  int n_degrau;
  cin>>degrau_cm;
  cin>>alturaescada_m;
  alturaescada_cm = alturaescada_m * 100;
  n_degrau = alturaescada_cm / degrau_cm;
  cout<<n_degrau<<endl;

  return 0;
}