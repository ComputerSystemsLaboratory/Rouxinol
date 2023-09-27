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

int change_to_i(string s){
   stringstream ss; int k;
   ss<<s; ss>>k;
   return k;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int l;
    while(1){
        cin >> s >> l;
        if(s == "0" && l == 0) break;
        map<string, int> mp;
        mp[s] = 0;
        for(int i = 1;; i++){
            int sz = s.size();
            rep(j, 0, l - sz) s += "0";
            sort(all(s));
            string t = s;
            sort(all(t));
            reverse(all(t));
            int tmp = change_to_i(t) - change_to_i(s);
            string next = to_string(tmp);
            // cout << s << ' ' << t << ' ' << tmp << endl;
            if(mp.count(next)){
                cout << mp[next] << " " << tmp << ' ' << i - mp[next] << endl;
                break;
            } 
            mp[next] = i;
            s = next;
        }
    }
}
