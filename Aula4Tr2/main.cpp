/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 */


#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    float sal; //salario
    
    cout << "--------Cauculadora de Imposto de Renda !----------" << endl;
    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "Informe o seu salário :";
    cin >> sal;
    
    
    cout << "---------------------------------" << endl;
    if (sal < 2000){ 
        cout << nome << ",você está insento de pagamento do  IRPF !";
    } else {
        if (sal < 3000){
            cout << nome << ",você deverá pagar " << sal * 0.15 << "de IRPF!";
    } else if (sal < 5000) {
            cout << nome << ",você deverá pagar " << sal * 0.20 << "de IRPF!";
    } else if (sal < 10000) {
            cout << nome << ",você deverá pagar " << sal * 0.23 << "de IRPF!";
    } else {
            cout << nome << ",você deverá pagar " << sal * 0.27 << "de IRPF!";
           }
                 
        }
    }
            

 