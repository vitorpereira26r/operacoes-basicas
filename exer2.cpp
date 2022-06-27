#include <iostream>

using namespace std;

int main (){
  float salario_minimo, salario_certo, valor_hora, imposto, salario_bruto;
  int horas_trabalhadas;
  
  //receber o salário mínimo e as horas trabalhadas
  cin>>salario_minimo;
  cin>>horas_trabalhadas;

  //calcular o valor da horas de trabalho
  valor_hora = salario_minimo * 0.05; 

  //calcular o salário bruto
  salario_bruto = valor_hora * horas_trabalhadas;

  //salario à receber
  imposto = salario_bruto * 0.23;
  salario_certo = salario_bruto - imposto;

  //mostrar o salário
  cout<<salario_certo<<endl;

  return 0;
}