#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
const int mod = 1e9+7;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<int> S;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main(){
    cout << fixed << setprecision(10);
    int n,m;
    set<string> ss;
    int state = 1;
    cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        ss.insert(s);
    }
    cin >> m;
    rep(i,m){
        string s;
        cin >> s;
        if(ss.find(s) != ss.end()){
            if(state == 1) cout << "Opened by " << s << endl;
            else cout << "Closed by " << s << endl;
            state ^= 1;
        }else cout << "Unknown " << s << endl;
    }
    return 0;
}
