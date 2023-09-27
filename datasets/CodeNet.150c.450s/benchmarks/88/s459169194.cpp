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
template<class T>bool chmax(T &a, const T &b){if(a<b){a=b; return true;} return false;}
template<class T>bool chmin(T &a, const T &b){if(a>b){a=b; return true;} return false;}
 
constexpr lint mod = 1e9+7;
constexpr lint INF = mod*mod;
constexpr int MAX = 100010;

int diag(pii p){
    return p.fi*p.fi + p.se*p.se;
}

int main(){
    vector<pii> p;
    For(i, 1, 1000)For(j, i+1, 1000) p.emplace_back(i, j);
    auto cmp = [&](const pii &a, const pii &b){
        if(diag(a) == diag(b)) return a.fi < b.fi;
        return diag(a) < diag(b);
    };
    sort(p.begin(), p.end(), cmp);
    auto check = [&](pii a, pii b){return cmp(a, b);};
    
    int h, w;
    while(scanf("%d%d", &h, &w) && h){
        pii ans;
        int low = 0, high = p.size()-1;
        while(high-low > 1){
            int mid = (high+low)/2;
            (check({h, w}, p[mid]) ? high : low) = mid;
        }
        
        ans = p[high];
        printf("%d %d\n", ans.fi, ans.se);
    }
}
