
#include <cstdlib>
#include <locale>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    setlocale (LC_ALL, "Portuguese");
    
    float media;
    
    cout <<"Digite a média do aluno: \n";
    cin >> media;
    
    if(media >= 0 && media <=10)
    {    
        cout << "A média é Valída !!\n";
    if(media >= 6)
    {
        cout << "Aluno fui aprovado  com média" << media << "!!!";
    }
    else // do if interno
    {
        cout << "Aluno foi reprovado com média" << media << "!!";
    }    
    
    }
    else
        {
            cout << "A média é invalida !!!\n";
        }       
    return 0;
}

