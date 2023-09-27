#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    ll n;
    cin >> n;
    map<string, ll> m;
    string s;
    rep1(i, n){
        cin >> s;
        m[s]++;
    }
    cout << "AC x " << m["AC"] << endl;
    cout << "WA x " << m["WA"] << endl;
    cout << "TLE x " << m["TLE"] << endl;
    cout << "RE x " << m["RE"] << endl;
    
    //printf("%.12f", ans);
}