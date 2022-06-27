#include <iostream>
#include <cmath>

using namespace std;

int main (){
  float homens, naus; 
  float caravelas;
  naus = 5;
  cin>>homens;
  if (homens > 1000){
    caravelas = (homens - (naus*200))/80;
    cout<<ceil(caravelas)<<endl;
  }else {
    caravelas = 0;
    cout<<caravelas<<endl;
  }


  return 0;
}