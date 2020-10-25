#include <iostream>
#include <vector>
using namespace std;

int main(){
    int q;
    cin >> q;
    vector <string> operations; 
    for (int i=0; i < q; ++i){
        string ans;
        int peop;
        cin >> ans;
        if (ans != "WORRY_COUNT"){
            cin >> peop;
        }

        if (ans == "COME" && peop > 0){
            for (int y = 0; y < peop; ++y)
            operations.push_back("calm");
        }

        if (ans == "WORRY"){
            operations[peop] = "worry";
        }

        if (ans == "QUIET"){
            operations[peop] = "calm";
        }

        if (ans == "COME" && peop < 0){
            for (int a=0; a < -peop; ++a){
                operations.erase(operations.end());
            }
        }

        if (ans == "WORRY_COUNT"){
            int worry_peop = 0;
            for (string c:operations){
                if (c == "worry"){
                    worry_peop += 1;
                }
            }
            cout << worry_peop << endl;
        }
        
    }
    return 0;
}