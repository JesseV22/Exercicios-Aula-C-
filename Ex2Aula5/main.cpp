Skip to content
Search or jump to…
Pulls
Issues
Marketplace
Explore
 
@JesseV22 
gutoso
/
cpp-projects-bsi
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
cpp-projects-bsi/sem1/week3/Ex2_2604/main.cpp
@gutoso
gutoso New exercises
Latest commit e1d8fc2 4 days ago
 History
 1 contributor
24 lines (18 sloc)  381 Bytes
   
/*
 * Escreva um programa para exibir os números contidos no intervalo de 50 a 10, inclusive.
 *
 * Aluno: Jessé Vitorino
 */

#include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i = 50;

    while (i >= 10){
        cout << i << endl;
        i = i - 1;
    }

    return 0;
}
