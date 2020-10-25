#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> temp(n);
    int sum = 0 ;
    for (int& i:temp){
        cin >> i;
        sum += i;
    }
    int avg = sum / temp.size();
    int hot_days = 0;
    vector <int> idx; 
    for  (int h = 0; h < temp.size(); ++h){
        if (temp[h] > avg){
            hot_days += 1;
            idx.push_back(h);
        }
    }
    cout << hot_days << endl;
    for (int e:idx){
        cout << e << ' ';
    }
    return 0;
}