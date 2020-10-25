#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, rem , i, v;
    vector<int> two;
    cin >> n;

    while ( n > 0) {
        i = n / 2;
        rem = n % 2;
        two.push_back(rem);
        n = i;
        }

    v = two.size();
    
    while (v > 0){
        cout << two[v - 1];
        --v;
    }

    return 0;
}