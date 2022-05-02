#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int age;
    
    cout <<"Quantos anos trabalhou: ";
    cin >> age;
    if (age>=30){
        cout << "Ok, você esta aposentado !" << endl;
    }
    else { 
        cout <<"Você não é apto para se aposentar vai trabalhar !" << endl;
        
    }

    return 0;
}

