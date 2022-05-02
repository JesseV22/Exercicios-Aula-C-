/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 *
 * Created on 15 de abril de 2022, 17:15
 */

#include <cstdlib>
#include <iostream>
#include <cstring>


using namespace std;

int main(int argc, char** argv) {
    int numero1,numero2,numero3,resutadoPreliminar,resutadoFinal;
    cout <<  "Esse programa faz a soma de tês números. \n";
    cout <<"Digite o primeiro número a ser somado: \n";
    cin >> numero1;
    cout <<"Digete o segundo número a ser somado: \n";
    cin >> numero2;
    resutadoPreliminar = numero1 + numero2;
    cout << "Digite o terceiro número a ser somado: \n";
    cin >> numero3;
    resutadoFinal = resutadoPreliminar + numero3;
    cout << "O valor da soma é: " << resutadoFinal;
            
    
            
            
    return 0;
}

