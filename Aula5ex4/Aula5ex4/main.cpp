/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Convidado
 *
 * Created on 26 de Abril de 2022, 10:04
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i; 
    for (i = 3 ; i <= 100; i+=3)
        cout << setw(5) << i << endl;
    return 0;
}

