#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

using namespace std;

class Funcionario
{
    protected:
        string nome;
        int matricula;

    public:
        Funcionario();
        virtual double calculaSalario()=0;
        string getNome();
        int getMatricula();
        void setNome();
        void setMatricula();
        virtual ~Funcionario();
};

#endif // FUNCIONARIO_H
