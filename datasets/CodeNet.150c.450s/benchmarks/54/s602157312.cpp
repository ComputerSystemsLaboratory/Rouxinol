#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

string change(string s){
    string word;
    rep(i,s.size()){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            word += s[i];
        }
    }
    return word;
}

int main(){
    string w, t;
    while(cin >> w){
        int ans = 0;
        w = change(w);
        while(cin >> t){
            if(t == "END_OF_TEXT") break;
            t = change(t);
            if(w == t) ans++;
        }
        cout << ans << endl;
    }
}