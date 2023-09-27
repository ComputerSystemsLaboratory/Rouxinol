#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1L << (x))
using ll = long long;
using namespace std;

template<typename T>
vector<T> make_v(size_t a,T b){return vector<T>(a,b);}
 
template<typename... Ts>
auto make_v(size_t a,Ts... ts){
    return vector<decltype(make_v(ts...))>(a,make_v(ts...));
}

int main() {
    string s, t; cin >> s >> t;
    const int n = s.length(), m = t.length();

    auto dp = make_v(n + 1, m + 1, 0);

    s = " " + s, t = " " + t;

    function<int(int, int)> rec = [&](int i, int j) {
        if (i == 0 || j == 0) {
            return max(i, j);
        }
        
        if (dp[i][j]) {
            return dp[i][j];
        }

        int ret = 1e5;
        ret = min(ret, rec(i - 1, j - 1) + (s[i] != t[j]));
        ret = min(ret, rec(i - 1, j) + 1);
        ret = min(ret, rec(i, j - 1) + 1);

        return dp[i][j] = ret;
    };
    
    cout << rec(n, m) << endl;

    return 0;
}

