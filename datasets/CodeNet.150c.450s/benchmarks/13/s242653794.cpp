#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    string s, p;
    while(cin >> s >> p){
        bool c;
        s += s;
        rep(i,s.size()){
            c = true;
            rep(j,p.size()){
                if(s[i + j] != p[j]){
                    c = false;
                    break;
                }
            }
            if(c) break;
        }
        if(c) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}