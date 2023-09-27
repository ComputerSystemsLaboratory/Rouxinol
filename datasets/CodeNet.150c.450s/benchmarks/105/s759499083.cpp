#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
//#define cerr if(false) cerr
#ifdef DEBUG
#define show(...) cerr << #__VA_ARGS__ << " = ", debug(__VA_ARGS__);
#else
#define show(...) 42
#endif
using namespace std;
using ll = long long;
using pii = pair<int, int>;
template <typename T, typename S>
ostream& operator<<(ostream& os, pair<T, S> a) {
    os << '(' << a.first << ',' << a.second << ')';
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, vector<T> v) {
    for (auto x : v) os << x << ' ';
    return os;
}
void debug() {
    cerr << '\n';
}
template <typename H, typename... T>
void debug(H a, T... b) {
    cerr << a;
    if (sizeof...(b)) cerr << ", ";
    debug(b...);
}
void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n)cin >> a[i];
    string s;
    cin >> s;
    vector<ll> basis;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == '0'){
            ll t = a[i];
            for(auto x : basis)t = min(t, t ^ x);
            if(t)basis.push_back(t);
        }else{
            ll t = a[i];
            for(auto x : basis)t = min(t, t ^ x);
            if(t){
                cout << 1 << "\n";
                return;
            }
        }
    }
    cout << 0 << "\n";
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}
