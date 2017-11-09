#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}
string Funcionario::getNome(){
    return nome;
}
int Funcionario::getMatricula(){
    return matricula;
}
void Funcionario::setNome(){
    cout<<"Digite o nome: ";
    getline(cin, nome);
}
void Funcionario::setMatricula(){
    cout<<"Digite a matricula: ";
    cin>>matricula;
}
Funcionario::~Funcionario()
{
    //dtor
}
