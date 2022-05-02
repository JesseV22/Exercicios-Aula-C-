/*     
1. Crie um programa para exibir o nome dos times (São Paulo, Santos, Palmeiras e Corinthians) na tela e que 
permita ao usuário a escolha de uma opção. Imprima uma mensagem sobre o time escolhido. 
Exemplo :
1 - São Paulo 
2 - Santos 
3 - Palmeiras 
4 - Corinthians 
Aluno: Jessé Vitorino de Oliveira
 * */




#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(int argc, char**argv){
    setlocale(LC_ALL, "Portuges");
    int time;
   
    cout << "----------------" << endl;
    cout <<"Selecione um time: " << endl;
    cout <<"1 São Paulo;"  <<  endl;
    cout <<"2 Snttos;"  <<  endl;
    cout <<"3 Palmeira;"  <<  endl;
    cout <<"4 Corinthians;"  <<  endl;
    cin >> time;
    
    switch(time){
            case 1:
                cout << "O time selecionado foi São Paulo!" << endl;
                cout <<"Famoso freguês do Palmeiras..." << endl;
                break;
            case 2:
                cout << "O time selecionado foi o Santos!" << endl;
                cout <<"Se fosse pra depender dos torcedores..." << endl;
            case 3:
                cout << "O time selecionado foi o Palmeiras!" << endl;
                cout <<"O maior campeão brasileiro!" << endl;
            case 4 :
                cout << "O time selecionado foi o Corinthians!;" << endl;                            
                cout <<"Se fosse pra depender dos torcedores..." << endl;
                break;
                
                default:
                    cout << "Opção Invalida!" << endl;
            
    }

}

 