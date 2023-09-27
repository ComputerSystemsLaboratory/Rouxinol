#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
using ld = long double;
using intpair = pair<int, int>;
const int MOD = 1e9 + 7;
inline int mod (ll a, int m = MOD) { return (a % m + m) % m; }
struct Fast {Fast(){cin.tie(0);ios::sync_with_stdio(0);}} fast;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, m) for (int i = (int)(n); i <= (int)(m); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define rALL(obj) (obj).rbegin(), (obj).rend()
#define ceiv(a, b) ((ll)((a) + (b) - 1)/(ll)(b))

int D;
const int CONTESTS = 26;
vector<int> c(CONTESTS), held_contests;
vector<vector<int>> s;

void calc_score(){
    int ans = 0;
    vector<int> last(CONTESTS,0);
    rep(i,D){
        ans += s[i][held_contests[i]];
        last[held_contests[i]] = i + 1;
        rep(j,CONTESTS){
            ans -= c[j] * (i + 1 - last[j]);
        }
        cout << ans << endl;
    }
}

void answer(){
    for(int i : held_contests){
        cout << i + 1 << endl;
    }
}

void debug(int seed){
    string cmd = "python3 /Users/trpfrog/Downloads/tester/generator.py ";
    cmd += to_string(seed);
    cmd += " > /Users/trpfrog/Documents/AtCoder/AtCoder/input.txt";
    system(cmd.c_str());
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
}

signed main(){
    cin >> D;
    held_contests = vector<int>(D);
    
    rep(i,CONTESTS) cin >> c[i];
    s = vector<vector<int>>(D, vector<int>(CONTESTS));
    rep(i,D)rep(j,CONTESTS) cin >> s[i][j];
    
    rep(i,D){
        cin >> held_contests[i];
        held_contests[i]--;
    }
    
    calc_score();
}