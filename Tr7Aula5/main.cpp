/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 *
 * Created on 2 de maio de 2022, 23:10
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
    int numero;
    cout << "Digite um númeoro : ";
    cin >> numero ;
    if(numero > 0) {
        cout <<"numero escolhido é positivo!" ;
    }
    else if (numero < 0){
                cout << "O número escolhido é negativo!" ;
    }
    else{
        cout << "O número é ZERO";
                
    }
 

    return 0;
}

