#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
template<class T> using vc = vector<T>;
template<class T> using vvc = vector<vector<T>>;

#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define repe(i, l, r) for (ll i = (l); i < (r); i++)
#define reper(i, l, r) for (ll i = (r)-1; i >= (l); i--)
#define repa(i,n) for (auto& i: n)

template<class T> inline bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
void init() {cin.tie(0);ios::sync_with_stdio(false);cout << fixed << setprecision(15);}

#ifdef DEBUG
template <class T, class N> void verr(const T& a, const N& n) { rep(i, n) cerr << a[i] << " "; cerr << "\n" << flush; }
ll dbgt = 1; void err() { cerr << "passed " << dbgt++ << "\n" << flush; }
template<class H, class... T> void err(H&& h,T&&... t){ cerr<< h << (sizeof...(t)?" ":"\n") << flush; if(sizeof...(t)>0) err(forward<T>(t)...); }
#endif

const ll INF = 4e18;
const ld EPS = 1e-11;
const ld PI = acos(-1.0L);
const ll MOD = 1e9 + 7;
// const ll MOD = 998244353;
//--------------------------------------------------------------------------------//
ll partition(vc<pair<ll,char>>& A, ll p, ll r){
    ll x = A[r].first;
    ll si = p - 1;
    repe(i, p, r){
        if(A[i].first<=x){
            si++;
            swap(A[i], A[si]);
        }
    }
    swap(A[si + 1], A[r]);
    return si + 1;
}

void quickSort(vc<pair<ll,char>>& A, ll p, ll r){
    if(p<r){
        ll q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main() {
    init();
    ll N;
    cin >> N;
    vc<pair<ll,char>> A(N), B;
    rep(i, N) cin >> A[i].second >> A[i].first;

    B = A;
    stable_sort(all(B), [](pair<ll, char> p1, pair<ll, char> p2) { return p1.first < p2.first; });

    quickSort(A, 0, N - 1);

    cout << (A == B ? "Stable" : "Not stable") << '\n';
    rep(i, N) cout << A[i].second << " " << A[i].first << '\n';
}
