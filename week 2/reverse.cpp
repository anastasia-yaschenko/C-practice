#include <iostream>
#include <vector>
using namespace std;


void Reverse(vector<int>& v){
    vector<int> vv;
    for (int i=v.size() - 1; i >= 0; --i){
        vv.push_back(v[i]);
    }
    v = vv;
}

int main(){
    return 0;
}