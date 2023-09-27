#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e9
typedef long long ll;


int main() {
    while(1){
        int n; cin >> n;
        if (n == 0) return 0;

        vector<int> diagram(100000,0);
        REP(i,n){
            string s,t;
            cin >> s >> t;
            int s_seconds = (s[7]-'0') + 10*(s[6]-'0') + 60*((s[4]-'0') + 10*(s[3]-'0')) + 3600*((s[1]-'0') + 10*(s[0]-'0'));
            int t_seconds = (t[7]-'0') + 10*(t[6]-'0') + 60*((t[4]-'0') + 10*(t[3]-'0')) + 3600*((t[1]-'0') + 10*(t[0]-'0'));
            diagram[s_seconds]++;
            diagram[t_seconds]--;
        }
        int ans = 0;
        REP(i,90000){
            diagram[i+1] += diagram[i];
            ans = max(ans, diagram[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
