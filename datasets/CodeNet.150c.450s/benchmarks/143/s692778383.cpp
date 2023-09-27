#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF = 1LL << 60; //intじゃ扱えないことに注意！
using P = pair<int,int>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++) //範囲外参照とループの初期化に注意！

const int MX = 100005;

int main() {
    ll n;
    cin >> n;
    vector<ll> cnt(MX);
    rep(i,n){
        int a;
        cin >> a;
        cnt[a]++;
    }
    ll tot = 0;
    rep(i,MX) tot += i*cnt[i];

    int q;
    cin >> q;
    rep(i,q){
        int b,c;
        cin >> b >> c;
        tot -= b*cnt[b];
        tot -= c*cnt[c];
        cnt[c] += cnt[b];
        cnt[b] = 0;
        tot += c*cnt[c];
        cout << tot << endl;
    }
    return 0;
}