#include <bits/stdc++.h>
using namespace std;

void to_lower(string &s){
    int dif = 'a'-'A';
    for(auto &c : s){
        if(c >= 'A' && c <= 'Z'){
            c += dif;
        }
    }
}

int main() {
    string s = "", w;
    int cnt;
    cin >> w;
    to_lower(w);
    while(1){
        cin >> s;
        if(s == "END_OF_TEXT") break;
        to_lower(s);
        if(s==w)cnt++;
    }
    cout << cnt << endl;
    return 0;
}
