#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string m){
    for (int i=0; i <m.size()/2; ++i){
        if (m[i] != m[m.size() - 1 - i]){
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> pal;
    for (auto w:words){
        if (w.size() >= minLength){
            if (IsPalindrom(w) == true){
                pal.push_back(w);
            }
        }
    }
    return pal;

}



int main(){
    /*vector<string> palindroms;
    vector<string> res;
    palindroms = {"abacaba", "aba"};
    res = PalindromFilter(palindroms, 5);
    for (auto ww:res){
        cout << ww << " ";
    }*/
    return 0;
}