#include <iostream>
#include "SistemaGerenciaFolha.h"

using namespace std;

void menu(){

    cout<<"\n----------  MENU  ----------\n\n";
    cout<<"0 - Sair\n";
    cout<<"1 - Adicionar Funcionario\n";
    cout<<"2 - Consultar Valor total da folha de pagamento\n";
    cout<<"3 - Consultar salario individual de determinado funcionario\n\n";
    cout<<"----------------------------\n\n";
    cout<<"> ";



}
int main()
{

    int opcao = -1;
    double salarioIndividual, ValorFolhaDePagamento;
    SistemaGerenciaFolha * sistema = new SistemaGerenciaFolha();

    cout<< "BEM VINDO!\n";
    cout<<"Este programa serve para gerenciamento de folhas de pagamentos.\n";



    while(opcao != 0){
        menu();
        cin>>opcao;

        //if((opcao<0) || (opcao>3)){
        //}

        switch(opcao){
            case 0:
                break;
            case 1:
                sistema->setFuncionarios();
                break;
            case 2:
                ValorFolhaDePagamento=sistema->calculaValorTotalFolha();
                if(ValorFolhaDePagamento==-1){
                    cout<<"\nNao ha nenhum funcionario na folha de pagamento.\n";
                    continue;
                }

                cout<<"\nValor total da folha de Pagamento: R$ "<<ValorFolhaDePagamento<<endl;

                break;

            case 3:
                try{

                salarioIndividual=sistema->consultaSalarioFuncionario();

                cout<<"O salario do funcionario eh: R$ "<<salarioIndividual;

                }
                catch(FuncionarioNaoExisteException funcionarioNaoExiste){
                    cout<<"\nNao exite nenhum funcionario com esse nome...\n";
                }
                break;
            default:
                cout<<"Entrada invalida, tente novamente.\n";

        }
    }

    delete sistema;

    cout<<"\nAte mais...\n";

    return 0;
}
