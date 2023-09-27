#include <bits/stdc++.h>
#define rep(i, start, end) for (long long i = start; i < end; ++i)
#define srt(x) sort((x).begin(), (x).end());
#define rsrt(x) sort((x).rbegin(), (x).rend());
#define deb(x) cout<<#x<<" = "<<(x)<<" (L"<<LINE<<")"<<endl;
#define vdeb(x) {cout<<#x<<" = { "; rep(i, x.size()) cout<<x[i]<<' '; cout <<'}'<<" (L"<<LINE<<")"<<endl;}
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vivi = vector<vi>;
using vll = vector<long long>;
using vllvll = vector<vll>;
using vs = vector<string>;
using um = unordered_map<long long, long long>;
const long long INF = 1LL << 60;
const long long MOD = 1e9 + 7;

vll factorize(ll n)
{
    vll res;
    ll tmp;
    do {
        bool flg = false;
        rep(i, 2, floor(sqrt(n))+1) {
            if (n % i == 0) {
                res.push_back(i);
                tmp = i;
                flg = true;
                break;
            } 
        }
        if (! flg) {
            res.push_back(n);
            break;
        }
        n /= tmp;
    } while (n);
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    ll n;
    cin >> n;
    vll ans;
    ans = factorize(n);
    cout << n << ':';
    for(ll el:ans) {
        cout << ' ' << el;
    }
    cout << endl;
}
