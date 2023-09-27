#include <bits/stdc++.h>
#define For(i, a, b) for(int (i)=(int)(a); (i)<(int)(b); ++(i))
#define rFor(i, a, b) for(int (i)=(int)(a)-1; (i)>=(int)(b); --(i))
#define rep(i, n) For((i), 0, (n))
#define rrep(i, n) rFor((i), (n), 0)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef unsigned long long ulint;
typedef pair<int, int> pii;
typedef pair<int, lint> pil;
typedef pair<lint, lint> pll;
template<class T> bool chmax(T &a, const T &b){if(a<b){a=b; return true;} return false;}
template<class T> bool chmin(T &a, const T &b){if(a>b){a=b; return true;} return false;}
template<class T> T div_floor(const T a, const T b){return a>=0 ? a/b : (a+1)/b-1;}
template<class T> T div_ceil(const T a, const T b){return a>=0 ? (a-1)/b+1 : a/b;}

constexpr lint mod = 1e9+7;
constexpr lint INF = mod*mod;
constexpr int MAX = 100010;

int n, a[10][5];

int f(){
    int ret = 0;
    rep(i, n){
        int l = 0;
        while(l < 5){
            int r = l;
            while(r < 5 && a[i][l] == a[i][r]) ++r;
            if(r-l >= 3){
                ret += a[i][l] * (r-l);
                For(j, l, r) a[i][j] = 0;
            }
            l = r;
        }
    }
    if(ret == 0) return 0;
    rrep(i, n)rep(j, 5)if(a[i][j] == 0){
        rrep(k, i)if(a[k][j]){
            a[i][j] = a[k][j];
            a[k][j] = 0;
            break;
        }
    }
    return ret;
}

int main(){
    while(scanf("%d", &n) && n){
        rep(i, n)rep(j, 5) scanf("%d", &a[i][j]);
        int ans = 0;
        while(true){
            int tmp = f();
            ans += tmp;
            if(tmp == 0) break;
        }
        printf("%d\n", ans);
    }
}
