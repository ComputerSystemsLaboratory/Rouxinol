#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

string solve(string s, int x){
    string t;
    for(int i = x; i < s.size(); i++){
        t += s[i];
    }
    rep(i,x){
        t += s[i];
    }
    return t;
}

int main(){
    string str;
    int n;
    while(cin >> str){
        if(str == "-") break;
        cin >> n;
        rep(i,n){
            int x;
            cin >> x;
            str = solve(str, x);
        }
        cout << str << endl;
    }
}