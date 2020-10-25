#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calendar = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<vector<string>> does(31);
    int ind = 0;
    for (int i=0; i<n; ++i){
        string operation;
        cin >> operation;

        if (operation == "ADD"){
            int day;
            string work;
            cin >> day >> work;
            does[day-1].push_back(work);
        }

        else if (operation == "DUMP"){
            int day;
            cin >> day;
            cout << does[day - 1].size() << " ";
            for (string op:does[day - 1]){
                cout << op << ' ';
            }
            cout << endl;
        }

        else if (operation == "NEXT"){
            int previous_days = calendar[ind % 12];
            ind += 1;
            int current_days = calendar[ind % 12];
            if (current_days > previous_days){
                does.resize(current_days);
            }
            else if (current_days < previous_days){
                for (int u = previous_days - current_days; u>0; --u){
                    does[current_days - 1].insert(end(does[current_days - 1]), begin(does[current_days -1 +u]),
                     end(does[current_days -1 +u]));
                }
                does.resize(current_days);
            }

            }

        }

return 0;

    }
