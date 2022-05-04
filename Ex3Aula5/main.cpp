/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Jessé Vitorino
 *
 * Created on 2 de maio de 2022, 23:22
 */

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, m;

    cout << "===== Exibir números no intervalo (N, M) =====" << endl;
    cout << "Informe N: ";
    cin >> n;
    cout << "Informe M: ";
    cin >> m;

    for (int i = n; i <= m; i++){
        cout << i << endl;
    }

    return 0;
}

