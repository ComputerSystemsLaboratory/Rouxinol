#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    set<string> s;
    for(int i = 0; i < n; i++){
        string input; cin >> input;
        s.insert(input);
    }

    int m; cin >> m;
    int t = 0;
    for(int i = 0; i < m; i++){
        string input; cin >> input;
        if(s.find(input) != s.end()){
            if(t % 2 == 0) cout << "Opened by " << input << endl;
            else cout << "Closed by " << input << endl;
            t++;
        }else{
            cout << "Unknown " << input << endl;
        }
    }

    return 0;
}