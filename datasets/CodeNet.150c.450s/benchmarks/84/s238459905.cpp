#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
ll inf=1001001001;
ll res=0;

ll merge_cnt(vector<ll> &a) {
    ll n = a.size();
    if (n <= 1) { return 0; }

    ll cnt = 0;
    vector<ll> b(a.begin(), a.begin()+n/2);
    vector<ll> c(a.begin()+n/2, a.end());

    cnt += merge_cnt(b);
    cnt += merge_cnt(c);

    ll ai = 0, bi = 0, ci = 0;
    // merge の処理
    while (ai < n) {
        if ( bi < b.size() && (ci == c.size() || b[bi] <= c[ci]) ) {
            a[ai++] = b[bi++];
        } else {
            cnt += n / 2 - bi;
            a[ai++] = c[ci++];
        }
    }
    return cnt;
}

int main(){
    ll n; cin>>n;
    vector<ll> s(n);
    rep(i,n) cin>>s[i];
    cout<<merge_cnt(s)<<endl;
    return 0;
}

