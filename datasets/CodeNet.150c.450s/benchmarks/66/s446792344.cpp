#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    set<string> st;
    cin >> n;
    rep(i, 0, n){
        string s;
        cin >> s;
        st.insert(s);
    }
    int cnt = 0;
    cin >> m;
    rep(i, 0, m){
        string s;
        cin >> s;
        if(st.count(s)){
            if(cnt % 2 == 0){
                cout << "Opened by " << s << endl;
            }else{
                cout << "Closed by " << s << endl;
            }
            cnt++;
        }else{
            cout << "Unknown " << s << endl;
        }
    }

}
