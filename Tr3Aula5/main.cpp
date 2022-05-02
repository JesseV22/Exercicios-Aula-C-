#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <locale>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char nome [20];
    float endereço,telefone;
    
    cout << "Informe seu nome" << endl;
    cin >> nome;
    
    cout <<"Informe seu telefone" << endl;
    cin >> telefone;
    
    cout <<"Informe seu endereço." << endl;
    cin >> endereço;
    
    cout << "Olá" << nome  << endl;
    cout << "Seu telefone é: "  << telefone << endl;
         
    cout  << "Seu endereço é :" << endereço << endl;
    cout <<"Esses são seus dados" << endl;
    
            
    return 0;
}

