#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <utility>
#include <climits>
#include <string>

typedef long long ll;

using namespace std;

void solve(){
    string s, p;
    cin >> s >> p;

    for(int i = 0; i < s.length(); i++){
        string str;
        if(i < s.length()-p.length()){
            str = s.substr(i, p.length());
        }else{
            str = s.substr(i, p.length());
            str += s.substr(0, p.length()-str.length());
        }
        if(str == p){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main() {
    solve();
    return 0;
}