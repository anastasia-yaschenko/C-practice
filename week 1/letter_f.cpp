#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    int idx = 0;
    int f = 0;
    for (auto i:a){
        

        if (i == 'f'){
            idx += 1;
        }

        if (idx == 2){
            cout << f;
            break;
        }
        ++f;
    }
    if (idx == 1){
        cout << -1;
    }
    if (idx == 0){
        cout << -2;
    }

    return 0;
}