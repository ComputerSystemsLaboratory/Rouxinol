#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF 1e18
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define all(x) (x).begin(), (x).end()
typedef pair<int, int> P;
const int mod = 1000000007;


signed main(){

    int n, m;
    cin >> n;
    vector<string> u(n);
    rep(i, n)cin >> u[i];
    bool now = false; // true -> open, false -> close
    cin >> m;
    rep(i, m){
        string s;
        cin >> s;
        bool f = true;
        rep(j, n)if(u[j] == s)f = false;
        if(f){
            cout << "Unknown " << s << endl;
            continue;
        }
        if(now){
            cout << "Closed by " << s << endl;
            now = false;
        }
        else{
            cout << "Opened by " << s << endl;
            now = true;
        }
    }
}
