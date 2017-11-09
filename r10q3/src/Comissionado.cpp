#include "Comissionado.h"

Comissionado::Comissionado() : Funcionario()
{
    //ctor
}
double Comissionado::calculaSalario(){
    cout<<"Para calcular o salario ";
    setVendasSemanais();
    return vendasSemanais * percentualComissao;
}
double Comissionado::getVendasSemanais(){
    return vendasSemanais;
}
double Comissionado::getPercentualComissao(){
    return percentualComissao;
}
void Comissionado::setVendasSemanais(){
    cout<<"Digite o valor das vendas semanais do funcionario "<<getNome()<<": ";
    cin>>vendasSemanais;
}
void Comissionado::setPercentualComissao(){
    cout<<"Digite o percentual de comissao do funcionario "<<getNome()<<" (por exemplo 0.1 para 10% de comissao): ";
    cin>>percentualComissao;
}
Comissionado::~Comissionado()
{
    //dtor
}
