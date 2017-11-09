#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(string nomeCliente, double salarioMensal, double saldo, string numeroConta);
        void definirLimite();
        virtual ~ContaEspecial()throw();

};

#endif // CONTAESPECIAL_H
