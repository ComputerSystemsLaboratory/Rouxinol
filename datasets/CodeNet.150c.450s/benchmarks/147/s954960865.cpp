#include <bits/stdc++.h>
#define all(vec) vec.begin(), vec.end()
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
template <class T>
using V = vector<T>;
template <class T>
inline void chmin(T &a, const T &b) { a = min(a, b); }
template <class T>
inline void chmax(T &a, const T &b) { a = max(a, b); }
template <class T>
inline bool kbit(const T &x, const int &k) { return ((x >> k) & 1LL); }
inline int popcount(const int &n) { return __builtin_popcount(n); }
inline ll popcountll(const ll &n) { return __builtin_popcountll(n); }
inline ll mask(const ll &k) { return (1LL << k) - 1LL; }
template <class T>
void zip(V<T> &v) {
    sort(all(v));
    v.erase(unique(all(v)), v.end());
}
template <class T>
int lwb(V<T> &v, const T &x) { return lower_bound(all(v), x) - v.begin(); }
void dump() {
    cerr << '\n';
}
template <class Head, class... Tail>
void dump(Head &&head, Tail &&... tail) {
    cerr << head << (sizeof...(Tail) == 0 ? " " : ", ");
    dump(std::move(tail)...);
}
template <class T>
void print(const vector<T> &v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << (i + 1 == v.size() ? '\n' : ' ');
}
template <class T>
void read(vector<T> &v) {
    for (int i = 0; i < v.size(); i++) cin >> v[i];
}
constexpr char sp = ' ', newl = '\n';
constexpr int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
constexpr ll INF = (1LL << 60) - 1LL;
constexpr ll MOD = 1e9 + 7;
//////////////////////////////////////////////INSERT ABOVE HERE
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int res = 0;
    V<int> cnt(n + 1);
    for (int x = 1; x * x <= n; x++) {
        for (int y = 1; y * y <= n; y++) {
            for (int z = 1; z * z <= n; z++) {
                int s = x * x + y * y + z * z + x * y + y * z + z * x;
                if (s <= n) {
                    cnt[s]++;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << cnt[i] << newl;
    }
}