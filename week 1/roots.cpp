#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    
    if (a == 0){
        if (b != 0){
            x1 = -c/b;
            cout << x1;
        }
    } 
    else{
        d = pow(b, 2) - 4*a*c;
        if (d >= 0){
            x1 = (-b + sqrt(d))/(2*a);
            x2 = (-b -sqrt(d))/(2*a);
            
            if (x1 != x2) {
                cout << x1 << " " << x2;
            }
            else if (x1 == x2){
                cout << x1;
            }
        }
    }
    return 0;
}