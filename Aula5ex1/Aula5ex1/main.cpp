/* 
 * File:   main.cpp
 * Author: jessé vitorino
 *
 * Created on 26 de Abril de 2022, 08:14
 */
#include <iostream>
#include <locale>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int main(int argc, char** argv) {

    setlocale (LC_ALL, "Portuguese");
    int idade = 19;
    long long int cpf = 2222222222222222;
    float salario = 1258.50;
    double pi =  3.202020222020202020;
    char sexo = "F";
    char nome [50] = "Linguagem C";
    
    
    
    cout << "Teste com os tipos de vaiáveis:" << endl;
    cout << "Idade : " << idade << endl;
    cout << "CPF: " << cpf << endl;
    cout << fixed << setprecision(2);
    cout << "Salário : " << salario << endl;
    cout << "Pi : " <<´pi << endl;
    cout << "Sexo" << sexo << endl;
    cout << "Nome : " << nome << endl;
    
}
    return 0;
            