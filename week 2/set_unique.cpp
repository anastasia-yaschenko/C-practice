#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<string> uniq;
    for (int i=0; i< q; ++i){
        string w;
        cin >> w;
        uniq.insert(w);
    }
    cout << uniq.size() << endl;
    return 0;
}