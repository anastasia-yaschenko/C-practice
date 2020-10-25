#include <iostream>
using namespace std;

int Factorial(int f){
    if (f < 0){
        return 1;
    }
    else{
        int g = 1;
        for (int p = 1; p <= f; ++p){
            g = g * p;
        }
        return g;
    }
}


int main(){
    int fac;
    cin >> fac;
    cout << Factorial(fac);
    return 0;
}