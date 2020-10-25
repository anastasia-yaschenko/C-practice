#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
    set<string> keys;
    for (auto i:m){
        keys.insert(i.second);
    }
    return keys;
}