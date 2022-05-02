

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float F,c;
    
    
    cout << ("Informe um valor de Fahrenheit pata converter para celsius : \n");
    cin >> F;
    
    
    c = (F -32) * 5 / 9;
    cout << "O valor do Grau em celsius é :" << c;
  
    

            
    return 0;
}

