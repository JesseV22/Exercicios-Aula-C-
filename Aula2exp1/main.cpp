#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    float num1,num2,num3, soma, subtraçao, divisao,multiplicaçao;
    int resto,num4,num5;
    cout <<"Este programa irá executar algumas operações matemáticas. \n";
    cout <<"Cinco números serão necessários." << endl;
    cout <<"Digite o quinto número" <<endl;
    cin >> num5 ;
    soma = num1 + num2;
    cout << "A soma do primeiro e segundo numero é: "   << soma   << endl subtraçao =  num3 - num1;
    cout << "A divisao  do terceiro número pela primeiro número é: "  << subtraçao << endl
     divisao = num2 / num1;
     cout << "A divisao  do segundo número pela primeiro número é: "  << multiplicaçao  << endl multiplicaçao = num1 * num2;
     cout <<"A multiplicação do primeiro númeoro pelo segundo numero é" <<resto <<endl;
     resto = num4 % num5 ;
       
    return 0;
}