/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
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
    char opc;
    float n1,n2;
    
    
    cout << "Selecione a operação desejada: " << endl;
    cout << "+ - Somar;" << endl;
    cout << "- - Subtrair;" << endl;
    cout << "/  -  Dividir;" << endl;
    cout << "* - Multiplicar;" << endl;
    cout << "S - Sair;"  << endl;
    cin >> opc;
    
    opc = toupper(opc);
    
    if (opc == 'S'){
        exit(0);
    }else{
        cout <<"\nInforme o primeiro número:";
        cin >> n1;
            cout <<"\nInforme o segundo número:";
        cin >> n2;
        
         switch (opc){
            case '+':
                cout << "O resultado de " << n1 << " + " << n2 << " é " << n1 + n2 << endl;
                break;
            case '-':
                cout << "O resultado de " << n1 << " - " << n2 << " é " << n1 - n2 << endl;
                break;
            case '/':
                cout << "O resultado de " << n1 << " / " << n2 << " é " << n1 / n2 << endl;
                break;
            case '*':
                cout << "O resultado de " << n1 << " * " << n2 << " é " << n1 * n2 << endl;
                break;
                default:
                    cout << "Opção Inválida!" << endl;
          }             
        }
    }
 