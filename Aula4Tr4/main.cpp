
/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 *
 * Created on 24 de abril de 2022, 23:28
 */


#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    int opc = 1, contador = 0, maior = 0;
    
    cout << "--------------------" <<endl;
    while (opc != 0){
        cout << "Digite um número (0 para parar ):";
        cin >> opc;
        contador++;
        if(opc > maior){
            maior = opc;
            
        }
    }
    
    cout  << "A quantidade de númeoros digitados foi: " << contador << endl;
    cout << "O maior número digitado foi : " << maior << endl;
            
    return 0;
}

