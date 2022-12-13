#include "lib.h"
bool find(char lista_nomi[10][20], char target_nome[20], int &posizione){

    for (int nome = 0; nome < 10; nome++)
    {
        for (int letter = 0; letter < 20; letter++)
        {
            if (lista_nomi [nome][letter] != target_nome[letter]){
                letter = 20;  //20 variabile che vanno da (0-19)
            }
            if (letter == 19){ //se tutte le letteri sono uguali allora va bene
                posizione = nome;//posizione, essendo che è nell'array va da 0-19
                return true;
            }
        }
    }
    return false;
}
