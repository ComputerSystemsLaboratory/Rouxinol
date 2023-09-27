#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define pb push_back
#define ALL(v) v.begin(),v.end()
const long long INF = 1LL << 60; // 仮想的な無限大の値;
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using Graph = vector<vector<int>>;
int main()
{
    int N;
    cin >> N;
    vector<ll> A(N);
    map<ll, ll> cnt;
    ll MAX = 0;
    ll sum = 0;
    rep(i, N)
    {
        cin >> A[i];
        ++cnt[A[i]];
        chmax(MAX, A[i]);
        sum += A[i];
    } 
    int Q;
    cin >> Q;
    vector<P> S;
    rep(i, Q) 
    {
        ll a, b;
        cin >> a >>b;
        S.emplace_back(P(a, b));
    }
    rep(i, Q) 
    {
        ll a = S[i].first;
        ll b = S[i].second;
        // rep(k, cnt[a]) sum -= a;
        // rep(k, cnt[b]) sum += b;
        sum -= (ll)(a*cnt[a]);
        sum += (ll)(b*cnt[a]);
        cnt[b] += cnt[a];
        cnt[a] = 0;
        cout << sum << endl;
    }
    return 0;
}