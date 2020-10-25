#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
    int q;
    cin >> q;
    map <set<string>, int> routes;

    for (int i = 0; i < q; ++i){
        int n_stops;
        cin >> n_stops;
        set<string> route;
        for (int j = 0; j < n_stops; ++j){
            string stop;
            cin >> stop;
            route.insert(stop);
        }
        if (routes.count(route) == 0){
            routes[route] = routes.size() + 1; 
            cout << "New bus " <<  routes[route] << endl;
        } else{
            cout << "Already exists for " << routes[route] << endl;
        }
    }
    return 0;
}