#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    quantidadeDeFuncionarios=0;
}
void SistemaGerenciaFolha::setFuncionarios(){

    int tipo;

    cout<<"qual o tipo de funcionario que deseja adicinar?\n";
    cout<<"1 - Assalariado\n";
    cout<<"2 - Horista\n";
    cout<<"3 - Comissionado\n";
    scanf("%d%*c", &tipo);

    while((tipo<1)||(tipo > 3)){
        cout<<"Tipo invalido de funcionario, digite novamente o tipo de funcionario: ";
        cin>>tipo;
    }

    switch(tipo){
        case 1:
            funcionarios[quantidadeDeFuncionarios]= new Assalariado();
            funcionarios[quantidadeDeFuncionarios]->setNome();
            funcionarios[quantidadeDeFuncionarios]->setMatricula();
            ((Assalariado *)funcionarios[quantidadeDeFuncionarios])->setSalario();

            break;
        case 2:
            funcionarios[quantidadeDeFuncionarios]= new Horista();
            funcionarios[quantidadeDeFuncionarios]->setNome();
            funcionarios[quantidadeDeFuncionarios]->setMatricula();
            ((Horista *)funcionarios[quantidadeDeFuncionarios])->setSalarioPorHora();
            break;
        case 3:
            funcionarios[quantidadeDeFuncionarios]= new Comissionado();
            funcionarios[quantidadeDeFuncionarios]->setNome();
            funcionarios[quantidadeDeFuncionarios]->setMatricula();
            ((Comissionado *)funcionarios[quantidadeDeFuncionarios])->setPercentualComissao();
            break;

    }
    quantidadeDeFuncionarios++;
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){

    if(quantidadeDeFuncionarios==0){
        return -1;
    }

    int i;
    double total = 0;

    for(i=0 ; i < quantidadeDeFuncionarios ; i++){
        total += funcionarios[i]->calculaSalario();
    }

    return total;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(){
    if(quantidadeDeFuncionarios==0){
        return -2;
    }

    int i, opcao, matriculaProcurada;
    string nomeProcurado;

    cout<<"Deseja consultar o salario procurando o funcionario pelo:\n";
    cout<<"1 - nome\n";
    cout<<"2 - numero da matricula\n";
    scanf("%d%*c", &opcao);

    while((opcao < 1)||(opcao > 2)){
        cout<<"entrada invalida, tente novamente: ";
        scanf("%d%*c", &opcao);
    }

    if(opcao==1){
        cout<<"Digite o nome do funcionario para consulta do seu salario: ";
        getline(cin, nomeProcurado);

        const char *texto1, *texto2;

        //sprintf(texto1,"%s", nomeProcurado);
        texto1 = nomeProcurado.c_str();

        for(i=0; i<quantidadeDeFuncionarios ; i++){

            //sprintf(texto2,"%s", funcionarios[i]->getNome());
            texto2 = (funcionarios[i]->getNome()).c_str();

            printf("texto 2: %s \n",texto2);
            printf("texto 1: %s \n",texto1);

            if(0 == strcmp(texto1, texto2 )){
                return funcionarios[i]->calculaSalario();
            }

        }

        throw exceptionFuncionarioNaoExiste;
    }

    if(opcao==2){

        cout<<"Digite o matricula do funcionario para consulta do seu salario: ";
        cin>>matriculaProcurada;

        for(i=0 ; i<quantidadeDeFuncionarios ; i++){
            if(matriculaProcurada==funcionarios[i]->getMatricula()){
                return funcionarios[i]->calculaSalario();
            }
        }

        throw exceptionFuncionarioNaoExiste;
    }

}
SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    int i;
    for(i=0 ; i<quantidadeDeFuncionarios ; i++){
        delete funcionarios[i];
    }
}
