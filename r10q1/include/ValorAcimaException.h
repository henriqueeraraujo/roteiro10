#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <exception>

class ValorAcimaException: public std::exception
{
    public:
        ValorAcimaException();
        virtual ~ValorAcimaException()throw();

    protected:

    private:
};

#endif // VALORACIMAEXCEPTION_H
