#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <tuple>
#include <algorithm>
#include <array>
using namespace std;
using ll = long long;
#define rep(i,n) for(decltype(n) i=0; i<n; ++i)
inline constexpr ll Inf = (1ULL << 62) -1;

template <class T>
void updatemax(T& a, T b) { if (b > a) a = b; }

int main() {
    ll N;
    cin >> N;
    vector<ll> s(1e5+1);
    ll sum=0;
    rep(i,N) {
        ll a;
        cin >> a;
        sum += a;
        s[a]++;
    }
    ll q;
    cin >> q;
    rep(i,q) {
        ll b, c;
        cin >> b >> c;
        sum += s[b]*(c-b);
        s[c] += s[b];
        s[b] = 0;
        cout << sum << endl;
    }
    return 0;
}