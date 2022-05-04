/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 *
 * Created on 2 de maio de 2022, 23:23
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;

    for (int i = 100; i <= 200; i++){
        if (i % 2 == 0){
            soma = soma + i;
        }
    }

    cout << "A soma de todos os números pares entre 100 e 200 é: " << soma << endl;

    return 0;
}

