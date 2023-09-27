#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

#define p_ary(ary,a,b) do { cout << "["; for (int count = (a);count < (b);++count) cout << ary[count] << ((b)-1 == count ? "" : ", "); cout << "]\n"; } while(0)
#define p_map(map,it) do {cout << "{";for (auto (it) = map.begin();;++(it)) {if ((it) == map.end()) {cout << "}\n";break;}else cout << "" << (it)->first << "=>" << (it)->second << ", ";}}while(0)

template<typename T1,typename T2>ostream& operator<<(ostream& os,const pair<T1,T2>& a) {os << "(" << a.first << ", " << a.second << ")";return os;}

const char newl = '\n';

int main() {
    int d;
    cin >> d;
    int c[26],s[370][26],t[370],u[26] = {0};
    for (int i = 0;i < 26;++i) cin >> c[i];
    for (int i = 0;i < d;++i) for (int j = 0;j < 26;++j) cin >> s[i][j];
    for (int i = 0;i < d;++i) cin >> t[i],t[i]--;
    ll ans = 0;
    /*
    for (int i = 0;i < d;++i) {
        ans += s[i][t[i]]-(i-u[t[i]])*(i-u[t[i]]+1)/2*c[t[i]];
        u[t[i]] = i+1;
    }
    for (int i = 0;i < 26;++i) ans -= (d-u[i])*(d-u[i]+1)/2*c[i];
    */
    for (int i = 0;i < d;++i) {
        ans += s[i][t[i]];
        u[t[i]] = i+1;
        for (int j = 0;j < 26;++j) ans -= (i+1-u[j])*c[j];
        cout << ans << newl;
    }
}