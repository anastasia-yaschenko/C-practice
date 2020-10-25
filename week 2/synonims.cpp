#include <iostream>
#include <set>
#include <string>
#include <map>
using namespace std;

int main(){
    int q;
    cin >> q;
    map<string, set<string>> vocab;
    for (int i = 0; i < q; ++i){
        string operation;
        cin >> operation;

        if (operation == "ADD"){
            string w1, w2;
            cin >> w1 >> w2;
            vocab[w1].insert(w2);
            vocab[w2].insert(w1);
        }

        if (operation == "COUNT"){
            string word;
            cin >> word;
            cout << vocab[word].size() << endl;
        }

        if (operation == "CHECK"){
            string ww1, ww2;
            cin >> ww1 >> ww2;
            int counter = 0;
            for (const string& j : vocab[ww1]){
                if (j == ww2){
                    ++counter;
                }
            }
            if (counter > 0){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    }
    return 0;
}