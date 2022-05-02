#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i = i,num;
     
    cout <<"Informe um número \n";
    cin >> num;
    cout << "Os 15 antecessores de" << num << "são: \n";
            
            do {
                cout  << num - i << endl ;
                i = i+ 1;
                
            }   while (i <= 15);
                       
    
    return 0;
}

