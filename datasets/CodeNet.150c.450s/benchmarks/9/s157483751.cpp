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

string shuffle(string s, int x){
    string s1, s2;
    for(auto itr = s.begin(); itr < s.begin()+x; itr++){
        s1 += *itr;
    }
    for(auto itr = s.begin()+x; itr < s.end(); itr++){
        s2 += *itr;
    }
    return s2+s1;
}

void solve(){
    string s;
    int m;
    while(cin >> s){
        if(s == "-"){
            break;
        }
        cin >> m;
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            s = shuffle(s, x);
        }
        cout << s << endl;
    }
}

int main() {
    solve();
    return 0;
}