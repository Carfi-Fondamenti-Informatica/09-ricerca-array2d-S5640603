#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char nomi[10][20];
    char nome[20];
    int posizione=0;
        for (int i=0; i<10; i++ ){
            for(int j=0; j<20; j++){
                nome[j]= ' ';
                nomi[i][j] = ' ';
            }
        }
        cout<<"Inserire 10 nomi di massino 20 caratteri"<<endl;

    for (int i=0; i<10; i++ ){
        cin>> nomi[i];
    }
    cout<<"Inserire il nome da cercare"<<endl;
    cin >> nome;

    if (find(nomi, nome, posizione))
    {
        cout << posizione << endl;
    }
    else
    {
        cout << "nome non presente nella lista"<<endl;
    }

    return 0;
}


