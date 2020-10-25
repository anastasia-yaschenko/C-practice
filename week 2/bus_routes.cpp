#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;


int main(){
    int q;
    cin >> q;
    map<vector<string>, int> routes ;
    int stop_count = 1;
    for (int i = 0; i < q; ++i){
        vector <string> stop;
        int n_stops;
        cin >> n_stops;
        for (int j = 0; j < n_stops; ++j){
            string new_stop;
            cin >> new_stop;
            stop.push_back(new_stop);
        }
        if (routes.count(stop) == 0){
            routes[stop] = stop_count;
            cout << " New bus " << stop_count << endl;
            ++stop_count; 
        } else{
            cout << "Already exists for " << routes[stop] << endl;
        }
    }

    return 0;
}