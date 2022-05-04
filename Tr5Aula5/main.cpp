/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 *
 * Created on 2 de maio de 2022, 21:49
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char produto [100];
   float valor,desc,valor_final;
    cout << "Informe o nome do produto : ";
    cin >> produto ;
    cout <<"valor do produto : " ;
    cin >> valor;
    desc = 0,13;
    cout << "desconto : " << "13%" << endl ; 
    valor_final = valor - 0.13 /100 ;
    cout << "Valor final : "  << valor - valor_final << endl;
    
   
    return 0;
}

