#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int opc;
    cout << "Digite 1 Para Prato do dia!\n";
    cout << "Digite 2 Para Lasanha!\n";
    cout << "Digite 3 Picanha Grelhada!\n";
    cout << "Digite 4 para Salada Simples!\n";
    
    cin >> opc;
    
    switch(opc)
    { 
        case 1:
            cout << "Prato do dia :17.00 reais \n";
            break ;
        case 2:
            cout << "Lasanha  :17.00 reais \n";
            break ;
        case 3:
            cout << "Picanha Grelhada :21.90 \n";
            break ;
        case 4:
            cout << "Salada simples :7.90 reais \n";
            break ;
            default: 
            cout << "Opção invalida !!!\n";
            
            
            
            
    }
    return 0;
}

