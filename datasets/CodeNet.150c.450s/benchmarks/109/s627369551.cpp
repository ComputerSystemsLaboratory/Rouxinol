#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int calc_time(string s){
    int t[3];
    for(int i = 0; i <= 6; i += 3)
      t[i / 3] = (s[i] - '0') * 10 + (s[i + 1] - '0');
    return t[0] * 3600 + t[1] * 60 + t[2];
}
typedef pair<int, bool> pib;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    while(cin >> N && N){
        vector<pib> t;
        rep(i, N){
            string a, b; cin >> a >> b;
            t.push_back(pib(calc_time(a), true));
            t.push_back(pib(calc_time(b), false));
        }
        sort(t.begin(), t.end());
        int res = 0, running = 0;
        for(const pib& k : t){
            if(k.second) running++; else running--;
            res = max(res, running);
        }
        cout << res << endl;
    }
    return 0;
}