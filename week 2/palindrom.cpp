#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string s){
    
    if (s.empty()== true){
        return true;
    }
    else{
        string inverse;
        for (int i = s.length() - 1; i>=0; --i){
            inverse += s[i];
        }
        if (inverse == s){
            return true;
        }
        return false;
    }
}



int main(){
    string word;
    cin >> word;
    cout << IsPalindrom(word);
    return 0;
}