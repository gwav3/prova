#include <iostream>
#include <fstream>
#include "gamer.h"
using namespace std;

void caricaestampa(ifstream *fileInput){
    string nome,punti;
     while(!fileInput->eof()){
        getline(*fileInput, nome, ';');
        getline(*fileInput, punti, '\n');
        gamer io(nome,atoi(punti.c_str()) );
        io.print();
    }
    
}

int main(){
   ifstream fileInput;
    fileInput.open("giocatori.txt");
    caricaestampa(&fileInput);
    
    cout<<"coaeif";
}