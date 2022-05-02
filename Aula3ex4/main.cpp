
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc,char** argv) {
    
    int golsSaoPaulo, golsInter;
    cout << "\n*** Placar São Paulo x Internacional ***\n";
    cout <<"Digite a quantidade de gols do São Paulo :";
    cin >> golsSaoPaulo;
    cout <<"\nDigite a quantidade de gols do Internacional: ";
    cin >> golsInter;
    if(golsSaoPaulo > golsInter) {
        cout << "A festa é tricolor !!!\n";
        cout << endl << "Siga o Lider...";
       
    }
    else
    {
        cout << "Não adianta tentar engana o computador.";
        cout <<endl << "Com certeza São APulo ganhou."; 
    }


    return 0;
}

