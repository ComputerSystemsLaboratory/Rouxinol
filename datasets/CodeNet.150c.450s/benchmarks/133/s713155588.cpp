#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define cinf(n,x) for(int i=0;i<(n);i++)cin>>x[i];
#define ft first
#define sc second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(v) (v).begin(),(v).end()
#define LB(a,x) lb(all(a),x)-a.begin()
#define UB(a,x) ub(all(a),x)-a.begin()
#define mod 1000000007
#define FS fixed<<setprecision(15)
using namespace std;
typedef long long ll;
const double pi=3.141592653589793;
template<class T> using V=vector<T>;
using Graph = vector<vector<int>>;
using P=pair<ll,ll>;
typedef unsigned long long ull;
typedef long double ldouble;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF=1e18;

int main(){
    cin.tie(0);ios::sync_with_stdio(false);
    ll D;
    cin>>D;
    V<ll> c(26);
    V<ll> lst(26,1);
    cinf(26,c);
    V<P> p(26);
    V<ll> t(D);
    set<P> st;
    ll sum=0;
    rep(i,26){
        p[i]=make_pair(c[i],i);
    }
    sort(all(p));
    ll s[D][26];
    rep(i,D){
        rep(j,26)cin>>s[i][j];
    }
    cinf(D,t);
    V<ll> ans(D);
    ll now=0;
    rep(i,D){
        /*set<P> ss;
        ll cnt=-1;
        ll res=-INF;
        rep(j,26){
            ll cc=0;
            rep(k,26){
                if(j==k) continue;
                cc+=lst[k]*c[k];
            }
            if(s[i][j]-cc>res){
                res=s[i][j]-cc;
                cnt=j;
            }
        }*/
        ll cnt=0;
        rep(j,26){
            if(j!=t[i]-1){
                cnt+=c[j]*lst[j];
            }
        }
        now+=s[i][t[i]-1]-cnt;
        
        cout<<now<<endl;
        lst[t[i]-1]=1;
        rep(j,26){
            if(j!=t[i]-1) lst[j]++;
        }
    }
    //cout<<ans[i]<<endl;
    /*rep(i,D) cout<<ans[i]+1<<endl;*/
}
//ペナルティ出しても焦らない　ACできると信じろ！！！
//どうしてもわからないときはサンプルで実験　何か見えてくるかも
//頭で考えてダメなら紙におこせ！！
/*
V,P(大文字)使用不可
乗算などの際にオーバーフローに注意せよ！
(適切にmodをとれ　にぶたんで途中で切り上げろ)
制約をよく読め！
{
    ・全探索できるなら全探索しろ
    ・異常な制約ならそこに注目
}
stringの計算量(扱い)注意
コーナー注意！(特に数値が小さいものについては要検証)
N行出力のときは'¥n'
グリッド上では行先が範囲内におさまるかif文で確認(RE注意)
if文ではちゃんと比較演算子==を使え('='でもエラー出ない)
配列(vector)の大きさが0か1以上かで場合分けせよ(RE注意)
(vector<int> a(m)でm==0というものはできない)
modはなるべく最後に取れ！
doubleを扱うときには(abs)ではなく'fabs'!!!
*/