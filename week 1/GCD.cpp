#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if (a == b){
        cout << a;
    }else{

        while (a>0 && b>0){
            if (a > b){
                if (a % b == 0){
                    cout << b;
                    break;
                } else {
                    a = a % b;
                }
            }
            else{
                if (b % a ==0 ){
                    cout << a;
                    break;
                }else{
                    b = b % a;
                }
            }
        }
    }
    

    return 0;
}