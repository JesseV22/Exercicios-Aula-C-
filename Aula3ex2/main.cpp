
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    char nome [20];
    float  media, nota1 ,nota2 , nota3;    
cout << "informe seu nome:" << endl;
    cin >> nome;
cout  <<"informe sua nota 1:" << endl;
    cin >> nota1;
cout <<"informe sua nota 2:"  << endl;
    cin >> nota2;
cout <<"informe sua nota 3:" << endl;
    cin >> nota3;
     media = nota1+ nota2 + nota3 /3; 
     cout <<"Media = " << media << endl;
    
            
           
    
   return 0;
}

