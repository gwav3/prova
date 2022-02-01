#ifndef GAMER_H_INCLUDED
#define GAMER_H_INCLUDED
#include <iostream>
using namespace std;
class gamer{
private:
    string nome;
    int punti;
public:
    gamer(string nome, int punti): nome(nome), punti(punti){}
    gamer():gamer("",0){}

    void setNome(string nome){this->nome=nome;}
    void setPunti(int punti){this->punti=punti;}

    string getNome(){return this->nome;}
    int getPunti(){return this->punti;}

    void print(){
        cout<<"Player ->"<<this->getNome()<<" con punteggio di "<<this->getPunti()<<"\n";
        return;
    }

    void printnosense(){cout<<"dfjgn";}

};




#endif // GAMER_H_INCLUDED