#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char nome [50];
    float km, minutos,hora, vm;
    cout << "Informe seu nome: " << endl;
    cin >> nome; 
    cout << "Informe quantidade de km percorridos: " << endl;
    cin >> km;
    cout << "Tempo Gastos em Minutos : " << endl;
    cin >> minutos;
    hora = minutos  / 60;
    vm = km / hora;
    cout <<"Olá " << nome  << "Você percorreu: " << km << " km " << " em " << minutos << " minutos ";
    cout << "sua velocidade media foi de " << vm;
    
    
          
   
    
    return 0;
}

