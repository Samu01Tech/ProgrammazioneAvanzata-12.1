#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <iostream>
using namespace std;

class Persona{
    private:
        string nome;
    public:
        Persona(){ nome = "NN"; }
        Persona(string s){ nome = s; }
        ~Persona(){}
        void stampa() const{
            cout << "Nome = " << nome << endl;
        };
        bool operator < (const Persona& p) const{
            return nome < p.nome;
        };
        friend ostream& operator << (ostream& os,const Persona& pp);
};

ostream& operator << (ostream& os,const Persona& pp){
    return os << "Nome = " << pp.nome;
};

#endif