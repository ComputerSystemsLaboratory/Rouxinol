#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vc = vector<char>;
using vb = vector<bool>;
using vs = vector<string>;
using vll = vector<long long>;
using vp = vector<pair<int, int>>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using vvll = vector<vector<long long>>;
template<class T> inline bool chmax(T &a, T b) { if (a<b) {a=b; return 1;} return 0;}
template<class T> inline bool chmin(T &a, T b) { if (b<a) {a=b; return 1;} return 0;}

const int day = 60*60*24;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    
    while (1) {
        int n;
        cin >> n;
        if (n == 0) return 0;
        vi a(day+1);
        rep(i, n) {
            int h1, m1, s1, h2, m2, s2;
            scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
            int s = h1*60*60 + m1*60 + s1;
            int e = h2*60*60 + m2*60 + s2;
            a[s]++;
            a[e]--;
        }
        rep(i, day) a[i+1] += a[i];
        cout << *max_element(a.begin(), a.end()) << endl; 
    }
}
