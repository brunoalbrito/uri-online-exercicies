#include <iostream>
using namespace std;

int main(){

    int entrada;

    cin >> entrada;

    if(entrada > 2 && entrada < 1000){
        for(int i = 1; i <= 10; i++){
            cout << i << " x " << entrada << " = " << i * entrada << endl;
        }   
    }

    return 0;
}