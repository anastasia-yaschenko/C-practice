#include <iostream>
#include <map>
#include <string>
using namespace std;


map<char, int> BuildCharCounters(const string& word){
    map<char, int> char_count;
    for (char c:word){
        ++char_count[c];
    }
    return char_count;
}

int main(){
    int N;
    cin >> N;
    for (int i= 0; i < N; ++i){
        string w1, w2;
        cin >> w1 >> w2;
        map<char, int> word1 = BuildCharCounters(w1);
        map<char, int> word2 = BuildCharCounters(w2);
        if (word1 == word2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}