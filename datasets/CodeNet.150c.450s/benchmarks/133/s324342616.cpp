#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(int)(n); i<i##_len; i++)
#define reps(i,n) for(int i=1 , i##_len=(int)(n);i<=i##_len;i++)
#define rrep(i,n) for(int i=((int)(n)-1);i>=0;i--)
#define rreps(i,n) for(int i=((int)(n));i>0;i--)
#define repi(i,x) for(auto i=(x).begin(),i##_fin=(x).end();i!=i##_fin;i++)
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define solve(a) ((a)?"Yes":"No")
typedef vector<int> Vi;
typedef vector<Vi> VVi;
typedef pair<int , int> Pi;
typedef vector<Pi> VPi;
typedef vector<long long> V;
typedef vector<V> VV;
typedef pair<long long , long long> P;
typedef vector<P> VP;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
const long long INFLL = 1LL<<60;
const int INF = 1<<30;
const double PI=acos(-1);
int main(){
    int d;
    cin >> d;
    Vi ans(d, 0);
    Vi c(26, 0);
    rep(i, 26)
    {
        cin >> c[i];
    }
    VVi s(d, Vi(26, 0));
    rep(i, d)
    {
        rep(j, 26)
        {
            cin >> s[i][j];
        }
    }
    rep(i, d)
    {
        cin >> ans[i];
        ans[i]--;
    }
    ll res=0LL;
    Vi last(26,0);
    rep(i,d){
        res+=s[i][ans[i]];
        last[ans[i]]=i+1;
        rep(j,26){
            res-=c[j]*(i+1-last[j]);
        }
        cout<<res<<endl;
    }
    return 0;
}