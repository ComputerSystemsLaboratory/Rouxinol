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
constexpr int MAX = 1000010;

string conv(int n){
        string s;
        if(n/1000>0){
                if(n/1000>1) s+='0'+n/1000;
                s+='m';
        }
        n%=1000;
        if(n/100>0){
                if(n/100>1) s+='0'+n/100;
                s+='c';
        }
        n%=100;
        if(n/10>0){
                if(n/10>1) s+='0'+n/10;
                s+='x';
        }
        n%=10;
        if(n>0){
                if(n>1) s+='0'+n;
                s+='i';
        }
        return s;
}

int main(){
        map<string, int> mp;
        For(i, 1, 10000) mp[conv(i)]=i;
        int n;
        scanf("%d", &n);
        rep(i, n){
                string s, t;
                cin>>s>>t;
                cout << conv(mp[s]+mp[t]) << "\n";
        }
}
