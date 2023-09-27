#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rrep(i,n) for (int i = (int)(n)-1; i>=0; --i)
#define For(i,a,b) for(auto i=(a);i<=(b);++i)
#define rFor(i,a,b) for(auto i=(b);i>=(a);--i)
#define call(var) cerr<<#var<<"="<<var<<"\n";
#define dup(x,y) (((x)+(y)-1)/(y))
#define all(x) (x).begin(),(x).end()
using ll=long long;
using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using Graph = vector<vi>;
using P = pair<int,int>;
const int MOD=(int)1e9+7;
const int INF=(int)1e9;
const ll LINF=(ll)1e18;
const double pi = acos(-1);
template<class t,class u> inline bool chmax(t&a,u b){if(a<b){a=b;return true;}return false;}
template<class t,class u> inline bool chmin(t&a,u b){if(b<a){a=b;return true;}return false;}
template<class T> istream& operator>>(istream& is, vector<T>& a){rep(i,a.size()) is >> a[i]; return is;}
template<class T> ostream& operator<<(ostream& os, vector<T>& a){rep(i,a.size()) os << a[i] << " "; return os;}
template<class T, class U> istream& operator>>(istream& is, pair<T,U>& p){is >> p.first >> p.second; return is;}
template<class T, class U> ostream& operator<<(ostream& os, const pair<T,U>& p){os << "("<< p.first << "," << p.second << ")"; return os;}
template<class T, class U> ostream& operator<<(ostream& os, const map<T,U>& mp){for(auto& t : mp) os << t.first << " " << t.second << "\n"; return os;}

int D;
vi c(26+1);
// D+1 * 26+1 vec
vector<vi> s;
// 1 ~ 26 のコンテストnumber
vi output;
// 1 ~ 26 のコンテストについて最後に開催した日
vector<vi> last_day;

void input(){
    cin >> D;
    rep(i,26) cin >> c[i+1];
    s.resize(D+1, vi(26+1));
    rep(i,D) rep(j,26) cin >> s[i+1][j+1];
    output.resize(D+1);
    last_day.resize(D+1, vi(26+1));
}

int last(int d, int i){
    // d日目より前にタイプiのコンテストを開催した日
    return last_day[d][i];
}

ll calScore(){
    ll ret = 0;
    vi b_ret(D+1);
    for(int i=1;i<=D;++i){
        b_ret[i] = b_ret[i-1] + s[i][output[i]];
        ret += s[i][output[i]];
        for(int j=1;j<=26;++j){
            b_ret[i] -= c[j] * (i - last(i, j));
            ret -= c[j] * (i - last(i, j));
        }
    }

    // B_ret
    //cerr << "B_ret\n";
    for(int i=1;i<=D;++i){
        cout << b_ret[i] << "\n";
    }
    return ret;
}

int main(){
    input();
    rep(i,D) cin >> output[i+1];
    for(int i=1;i<=26;++i){
        last_day[0][i] = 0;
    }
    for(int i=1;i<=D;++i){
        for(int j=1;j<=26;++j){
            if(output[i] == j) last_day[i][j] = i;
            else last_day[i][j] = last_day[i-1][j];
        }
    }

    calScore();
}