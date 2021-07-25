#include <iostream>
#include <string>

#include <ctype.h>
#include <stdlib.h>

using namespace std;

const string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVXYWZ";

const string cifrato = "DEFGHIJKLMNOPQRSTUVXYWZABC";

string decrypt(string parola){

    string risultato("");

    for (int i = 0; i < (int)parola.size(); i++)
    {
        bool trovato = false;

        int j = 0;

        for (j = 0; j < (int)alfabeto.size(); j++)
        {
            if (toupper(parola[i]) == alfabeto[j]){
                risultato = risultato + cifrato[j];
                trovato = true;
            }
            
        }
        if (trovato == false)
                risultato = risultato + parola[i];
    }

    return risultato;
}

int main(int argc, char *argv[]){

    cout << "Programma di cifratura Cesare \n";
    cout << "Inserisci la parola da criptare : ";

    string parola("");
    string risultato("");

    getline(cin,parola);

    int parolasize = parola.size();

    for (int i = 0; i < parolasize; i++)
    {
        bool trovato = false;

        int j = 0;

        for (j = 0; j < (int)cifrato.size(); j++)
        {
            if (toupper(parola[i]) == cifrato[j]){
                risultato = risultato + alfabeto[j];
                trovato = true;
            }
            
        }
        if (trovato == false)
                risultato = risultato + parola[i];
    }
    
cout << "La parola cifrata con Cesare è ";
cout << risultato << endl;

string reverse = decrypt(risultato);

cout << "Eseguo il reverse? ";
cout << reverse << endl;
    return 0;
}
