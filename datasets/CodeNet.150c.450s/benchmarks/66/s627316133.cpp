#include <bits/stdc++.h>
#define For(i, a, b) for(int (i)=(a); (i)<(b); ++(i))
#define rFor(i, a, b) for(int (i)=(a)-1; (i)>=(b); --(i))
#define rep(i, n) For((i), 0, (n))
#define rrep(i, n) rFor((i), (n), 0)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef unsigned long long ulint;
typedef pair<int, int> pii;
typedef pair<int, lint> pil;
typedef pair<lint, int> pli;
template<class T>bool chmax(T &a, const T &b){if(a<b){a=b; return true;} return false;}
template<class T>bool chmin(T &a, const T &b){if(a>b){a=b; return true;} return false;}

constexpr lint mod = 1e9+7;
constexpr lint INF = mod*mod;
constexpr int MAX = 100010;

int main(){
        int n;
        scanf("%d", &n);
        set<string> S;
        rep(i, n){
                string s;
                cin>>s;
                S.insert(s);
        }
        int m;
        scanf("%d", &m);
        int state=0;
        while(m--){
                string s;
                cin>>s;
                if(S.find(s)!=S.end()){
                        state^=1;
                        cout << (state ? "Opened " : "Closed ");
                        cout << "by " << s << "\n";
                }
                else{
                        cout << "Unknown " << s << "\n";
                }
        }
}
