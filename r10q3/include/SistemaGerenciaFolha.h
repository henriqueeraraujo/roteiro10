#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include <string.h>
#include <stdio.h>
#include "FuncionarioNaoExisteException.h"

class SistemaGerenciaFolha
{
    protected:

        Funcionario * funcionarios[30];
        int quantidadeDeFuncionarios;
        FuncionarioNaoExisteException exceptionFuncionarioNaoExiste;

    public:
        SistemaGerenciaFolha();
        void setFuncionarios();
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

        virtual ~SistemaGerenciaFolha();
};

#endif // SISTEMAGERENCIAFOLHA_H
