#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
//type
typedef long long ll;
#define pii pair<int, int>
#define vi vector<int>
//x * y * 1.0 can cause overflow
//constant
#define inf (int)(1e9+7)
#define mod (ll)(1e9+7)
#define eps 1e-10
//omission
#define eb emplace_back
#define F first
#define S second
#define SZ(x) ((int)(x).size())
#define all(v) v.begin(), v.end()
#define ios cin.tie(0); ios::sync_with_stdio(false)
#define FIX(a) cout << fixed << setprecision(a)
#define mp make_pair
//manip
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
#define UNIQUE(v) v.erase(unique(v.begin(), v.end(), v.end());
#define fill(x, y) memset(x, y, sizeof(x))
#define ceil(a, b) a / b + !!(a % b)
template<class T> T power_mod(T a, T b) {return b ? power(a * a % inf, b / 2) * (b % 2 ? a : 1) % inf : 1;}
template<class T> T power(T a, T b) {return b ? power(a * a, b / 2) * (b % 2 ? a : 1) : 1;}
#define LB(v, x) (int)(lower_bound(v.begin(), v.end(), x) - v.begin())
#define UB(v, x) (int)(upper_bound(v.begin(), v.end(), x) - v.begin())
template<typename T> T gcd(T a, T b) {if (b == 0) return a; return gcd(b, a % b);}
template<typename T> T lcm(T a, T b) {return a / gcd(max(a, b), min(a, b)) * b;} //先に割る!!
#define outa(a, n) rep(i_, n) cout << a[i_] << " "; cout << endl
#define out(a) cout << a << endl
#define outv(v) rep(i, SZ(v)) cout << v[i] << " "; cout << endl
//loop
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep3(i, st, n) for (int i = st; i < n; ++i)
//algorithm
//double pointer, l start, how many adds, can be 0 -> init r = l, sum = 0
//bfs, not x, y, i, j
//not !(i % 2), i % 2 == 0
//minimal required terms
//cast caution
//look constraints always



int main() {
    
    
    
    
    int n;
    while (cin >> n && n) {
        int a = 0, b = 0;
        int state = 0; //両足床 0, 両足上 1
        int cnt = 0;
        rep(i, n) {
            string str; cin >> str;
            
            if (str == "lu") a = 1;
            else if (str == "ru") b ^= 1;
            else if (str == "ld") a = 0;
            else b = 0;
            
            if (state == 0 && a == 1 && b == 1) {
                cnt++;
                state = 1;
            } else if (state == 1 && a == 0 && b == 0) {
                cnt++;
                state = 0;
            }
            
        }
        out(cnt);
    }
}


