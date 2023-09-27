#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <unordered_map>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;

using namespace std;

template<class T>
vector<T> make_vec(size_t a){
    return vector<T>(a);
}
template<class T, class... Ts>
auto make_vec(size_t a, Ts... ts){
    return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}

ll evalNow(vector<vector<int>> s, vector<int> c, vector<int> t, int d, vector<int>& last) {
    ll ans = 0;
    ans += s[d][t[d]-1];
    last[t[d]-1] = d+1;
    rep(j, 26) {
        ans -= c[j]*(d+1 - last[j]);
    }
    return ans;
}

ll evalAll(vector<vector<int>> s, vector<int> c, vector<int> t, int d) {
    ll ans = 0;
    vector<int> last(26,0);
    rep(i, d) {
        ans += s[i][t[i]-1];
        last[t[i]-1] = i+1;
        rep(j, 26) {
            ans -= c[j]*(i+1 - last[j]);
        }
    }
    return ans;
}

int main(){
    int d; cin >> d;
    vector<int> c(26);
    rep(i, 26) {
        cin >> c[i];
    }
    vector<vector<int>> s(d, vector<int>(26,0));
    rep(i, d) {
        rep(j, 26) {
            cin >> s[i][j];
        }
    }
    vector<int> t(d);
    ll ans = 0;
    vector<int> last(26,0);

    rep(i, d) {
        cin >> t[i];
        ans += evalNow(s,c,t,i, last);
        cout << ans << endl;
        // cout << evalAll(s, c, t, i+1) << endl;
    }
}
