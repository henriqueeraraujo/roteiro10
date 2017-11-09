#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <exception>

class ValorAbaixoException : public std::exception
{
    public:
        ValorAbaixoException();
        virtual ~ValorAbaixoException() throw();

    protected:

    private:
};

#endif // VALORABAIXOEXCEPTION_H
