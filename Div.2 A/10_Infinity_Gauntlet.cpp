#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<string, string>> pair = {
        {"purple", "Power"},
        {"green", "Time"},
        {"blue", "Space"},
        {"orange", "Soul"},
        {"red", "Reality"},
        {"yellow", "Mind"},
    };
    int x;
    cin >> x;
    if(x == 0){
        cout << 6 << endl;
        for(int i = 0; i < 6; i++){
            cout << pair[i].second << endl;
        }
        return 0;
    }
    cout << 6-x << endl;
    vector<string> input(x);
    for(int i = 0; i < x; i++){
        cin >> input[i];
    }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(input[i] == pair[j].first){
                pair[j].second = "";
            }
        }
    }
    for(auto& string : pair){
        if(string.second != ""){
            cout << string.second << endl;
        }
    }

    return 0;
}
