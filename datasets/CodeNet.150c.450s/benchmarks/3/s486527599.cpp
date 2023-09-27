#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;

signed main(){
    string s, t, u, p;
    int n, a, b;
    cin >> s >> n;
    rep(i, 0, n){
        cin >> t >> a >> b;
        if(t == "print"){
            u = s.substr(a, b - a + 1);
            cout << u << endl;
        }else if(t == "reverse"){
            reverse(s.begin() + a, s.begin() + b + 1);
        }else{
            cin >> p;
            s.replace(a, b - a + 1, p);
        }
    }
}