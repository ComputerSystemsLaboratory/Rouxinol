//
#include <vector>
#include <set>
#include <map>
#include <array>
#include <iostream>
#include <cstdio>
#include <cstdint>
#include <algorithm>
#include <numeric>
#include <bitset>
#include <iomanip>
//
using ll = long long;
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);++i)
#define outD(fpv) cout << setprecision(20) << fpv << endl;
inline void yes(bool cond) { cond ? puts("Yes") : puts("No"); }
inline void YES(bool cond) { cond ? puts("YES") : puts("NO"); }
template<typename Type> inline void chmin(Type& a, Type b) { if (a > b) a = b; }
template<typename Type> inline void chmax(Type& a, Type b) { if (a < b) a = b; }
template<typename Arr, typename Type> inline void fill(Arr& arr, Type v) { std::fill(arr.begin(), arr.end(), v); }
template<typename Type> inline void sort(Type& arr) { std::sort(arr.begin(), arr.end()); }
template<typename Type> inline void reverse(Type& arr) { reverse(arr.begin(), arr.end()); }
template<typename Type> inline Type nth(vector<Type>& arr, size_t pos) { std::nth_element(arr.begin(), arr.begin() + pos, arr.end()); return arr[pos]; }
template<typename Type> inline void unique(Type& arr) { sort(arr); arr.erase(unique(arr.begin(), arr.end()), arr.end()); }
constexpr ll INF_I = std::numeric_limits<ll>::max();
constexpr ll BIGP = 1e9 + 7;
constexpr double INF_F = std::numeric_limits<float>::infinity();
constexpr double PI = 3.14159265358979323846L;
using P = pair<ll, ll>;
//
int main()
{
    cin.tie(0); ios::sync_with_stdio(false);
    //
    ll N;
    cin >> N;
    map<ll, ll> counts;
    ll baseCount = 0;
    rep(i, N)
    {
        ll a;
        cin >> a;
        ++counts[a];
        baseCount += a;
    }
    ll Q;
    cin >> Q;
    rep(i, Q)
    {
        ll B, C;
        cin >> B >> C;
        baseCount += counts[B] * (C - B);
        counts[C] += counts[B];
        counts[B] = 0;
        cout << baseCount << endl;
    }
    //
    return 0;
}