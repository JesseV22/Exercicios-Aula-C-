#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    int num1,num2,num3;
    bool resultado;
    cout << "Operadores Relacionais" << endl;
    cout << "Digite 3 números "  << endl; 
    cin >> num1 >> num2 >> num3;
    resultado = num1 > num2;
    cout << "O resutado da op: núm1 é  maior que o numero 2, é: " << resultado << endl;
    resultado = num2 == num3;
    cout << "O resutado de op: núm2 é igual ao núm 3 é: " << resultado << endl;
    resultado = num3 != num1;
    cout << "O resutado da op: núm3 é diferente do núm1 é?: "  << resultado << endl;
    
    return 0;
}

