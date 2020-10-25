#include <iostream>
#include <vector>
using namespace std;


vector<int> Reversed(const vector<int>& v){
    vector<int> vv;
    for (int i=v.size() - 1; i >= 0; --i){
        vv.push_back(v[i]);
    }
    return vv;
}

int main(){
    return 0;
}