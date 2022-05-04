/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 *
 * Created on 2 de maio de 2022, 23:24
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int ano, idade, anoAtual, idadeTotal;

    cout << "===== Calcular soma das idades de 5 pessoas! =====" << endl;
    cout << "Informe o ano atual: ";
    cin >> anoAtual;

    for (int i = 1; i <= 5; i++){
        cout << "Informe seu nome: ";
        cin >> nome;
        cout << "Informe seu ano de nascimento: ";
        cin >> ano;

        idade = anoAtual - ano;
        idadeTotal = idadeTotal + idade;
    }

    cout << "A soma das idades das 5 pessoas é igual a: " << idadeTotal << endl;

    return 0;
}

