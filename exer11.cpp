#include <iostream>
#include <cmath>
using namespace std;

int main (){

  int n, d;
  cin>>n;
  if (n >= 3){
    d = ((n - 3) * n) / 2;
    cout<<d<<endl;
  } else {
    cout<<"error"<<endl;
  }
  

  return 0;
}