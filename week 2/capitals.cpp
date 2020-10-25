#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){
    int q;
    cin >> q;
    map <string, string> capitals;
    for (int i = 0; i < q; ++i){
        string operation;
        cin >> operation;

        if (operation == "CHANGE_CAPITAL"){
            string country, new_cap;
            cin >> country >> new_cap;
            if (capitals.count(country) == 0){
                cout << "Introduce new country " << country << " with capital " << new_cap << endl;
                capitals[country] = new_cap;
            } else{
                if (capitals[country] == new_cap){
                    cout << "Country " << country << " hasn't changed its capital" << endl;
                } else{
                    cout << "Country " << country << " has changed its capital from " << 
                    capitals[country] << " to " << new_cap << endl;
                    capitals[country] = new_cap;
                }

            }

        }

        if (operation == "RENAME"){
            string old_c, new_c;
            cin >> old_c >> new_c;
            if (capitals.count(old_c) == 0 || capitals.count(new_c) == 1 || old_c == new_c){
                cout << "Incorrect rename, skip" << endl;
            }else{
                cout << "Country " << old_c << " with capital " << capitals[old_c]<< 
                " has been renamed to " << new_c << endl;
                string cap = capitals[old_c];
                capitals.erase(old_c);
                capitals[new_c] = cap;
            }

        }
        
        if (operation == "ABOUT"){
            string country;
            cin >> country;
            if (capitals.count(country) == 0){
                cout << "Country " << country << " doesn't exist" << endl;
            } else{
                cout << "Country " << country << " has capital " << capitals[country] << endl;
            }
        }

        if (operation == "DUMP"){
            if (capitals.size() == 0){
                cout << "There are no countries in the world" << endl;
            }else{
                for (auto j:capitals){
                    cout << j.first << "/" << j.second << " ";
                }
            }
        }


    }

}
