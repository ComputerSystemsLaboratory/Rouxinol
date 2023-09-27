#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef pair<int, int> P;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

void YN(bool flg){if(flg) cout << "YES" << endl; else cout << "NO" << endl;}
void Yn(bool flg){if(flg) cout << "Yes" << endl; else cout << "No" << endl;}
void yn(bool flg){if(flg) cout << "yes" << endl; else cout << "no" << endl;}

//素因数分解
vector<pair<ll, ll>> prime_factorize(ll n) {
    vector<pair<ll, ll>> res;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i != 0) continue;
        ll ex = 0;

        while(n % i == 0) {
            ex++;
            n /= i;
        }

        res.push_back({i, ex});
    }

    if(n != 1) res.push_back({n, 1});
    return res;
}
//const auto &res = prime_factorize(n);

int main() {
    ll n;
    cin >> n;

    const auto &res = prime_factorize(n);
    
    cout << n << ":";
    for(auto p : res) {
        rep(i, p.second) cout << " " << p.first;
    }
    cout << endl;

    return 0;
}

