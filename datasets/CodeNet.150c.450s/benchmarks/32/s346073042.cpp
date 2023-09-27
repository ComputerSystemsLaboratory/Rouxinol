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
#define mod 1000000007
using namespace std;
typedef long long ll;
template<class T> using V=vector<T>;
using Graph = vector<vector<int>>;
using P=pair<ll,ll>;
typedef unsigned long long ull;
typedef long double ldouble;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//V,P(大文字)使用不可
//乗算の際にオーバーフローに注意せよ！！（適切にmodをとれ）
//制約をよく読め！

const ll INF=1e18;

signed main(){
    while(true){
        int m,mi,ma;
        cin>>m>>mi>>ma;
        if(m==0&&mi==0&&ma==0) break;
        V<int> p(m);
        cinf(m,p);
        int cnt=0;
        int ans;
        for(int i=mi;i<=ma;i++){
            if(p[i-1]-p[i]>=cnt){
                cnt=p[i-1]-p[i];
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
}
