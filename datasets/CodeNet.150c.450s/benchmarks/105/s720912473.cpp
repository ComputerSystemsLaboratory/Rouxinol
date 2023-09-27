#include <bits/stdc++.h>

using namespace std;
#define all(a)a.begin(),a.end()
using ll=long long;
const int INF = 1<<30;
const ll INFll =1LL<<62;
const int mod= int(1e9)+7;
using P = pair<ll,ll>;
using ld=long double;

int main(){
    ll t;cin >>t;
    for (int i = 0; i < t; ++i) {
        ll n;
        bool flg=true;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        vector<ll> basis;
        for (int i = n - 1; i >= 0; --i) {
            for (auto b:basis) {
                a[i] = min(a[i], a[i] ^ b);
            }
            if (a[i]) {
                if (s[i] == '0') {
                    basis.push_back(a[i]);
                } else {
                    puts("1");
                    flg=false;
                    break;
                }
            }
        }
        if(flg) {
            puts("0");
        }
    }
    return 0;
}