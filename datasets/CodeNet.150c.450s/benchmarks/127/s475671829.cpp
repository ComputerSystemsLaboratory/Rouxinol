#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repp(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;

signed main(){
    //AOJ 1142
    int m;
    cin >> m;
    rep(i, 0, m){
        string str;
        cin >> str;
        string s[2], t[2];
        set<string> st;
        rep(i, 1, str.size()){
            s[0] = str.substr(0, i);
            t[0] = str.substr(i, str.size() - i);
            s[1] = s[0];
            reverse(all(s[1]));
            t[1] = t[0];
            reverse(all(t[1]));
            rep(j, 0, 2){
                rep(k, 0, 2){
                    string tmp = s[j] + t[k];
                    st.insert(tmp);
                    tmp = t[k] + s[j];
                    st.insert(tmp);
                }
            }
        }
        cout << st.size() << endl;
    }
}