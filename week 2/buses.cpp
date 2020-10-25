#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
    int q;
    cin >> q;
    map<string, vector<string>> routes;
    vector<string> bus_order;
    for (int i = 0; i < q; ++i){
        string operation;
        cin >> operation;

        if (operation == "NEW_BUS"){
            int n_stops;
            string bus;
            cin >> bus >> n_stops;
            bus_order.push_back(bus);
            for (int j = 0; j < n_stops; ++j){
                string stop;
                cin >> stop;
                routes[bus].push_back(stop);
            }
        }

        if (operation == "BUSES_FOR_STOP"){
            string needed_stop;
            cin >> needed_stop;
            int global_stops = 0;
            for (const string& b : bus_order){
                int stop_exist = 0;
                for (const string& st : routes[b]){
                //for (const auto& item:routes){   
                        if (st == needed_stop){
                            ++stop_exist;
                            ++ global_stops;
                        }
                    }
                    if (stop_exist > 0){
                        cout << b << " ";
                    }
                }
            if (global_stops == 0){
                cout << "No stop";
            }
            cout << endl;
        }

        if (operation == "ALL_BUSES"){
            if (routes.empty()){
                cout << "No buses" << endl;
                } else{
                for (const auto& item : routes){
                    cout << "Bus " << item .first << ": ";
                    for (string st:item.second){
                        cout << st << " ";
                    }
                    cout << endl;
                }
            }
        }

        if (operation == "STOPS_FOR_BUS"){
            string bus;
            cin >> bus;
            if (routes.count(bus) == 0){
                cout << "No bus" << endl;
            }else{
                vector <string> chosen_bus = routes[bus];
                for (const string& s:chosen_bus){
                    cout << "Stop " << s << ": "; 
                    int global_other_buses = 0;
                    for (const string& p:bus_order){
                        if (p != bus){
                            int other_buses = 0;
                            for (const string& ss: routes[p]){
                                if (ss == s){
                                    ++other_buses;
                                    ++global_other_buses;
                                }
                            }
                            if (other_buses > 0){
                                cout << p << " ";
                            }
                        }
                    }
                    if (global_other_buses == 0){
                        cout << "no interchange";
                    }
                    cout << endl;
                }

            }

        }

    }




    return 0;
}