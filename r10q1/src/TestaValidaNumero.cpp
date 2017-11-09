#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{
    abaixo = ValorAbaixoException();
    acima = ValorAcimaException();
    muitoAcima = ValorMuitoAcimaException();

}
void TestaValidaNumero::validaNumero(int num){
    if(num <= 0){
        throw abaixo;
    }
    if((num > 100) && (num <1000)){
        throw acima;
    }
    if(num >= 1000){
        throw muitoAcima;
    }

}
TestaValidaNumero::~TestaValidaNumero()throw()
{
    //dtor
}
