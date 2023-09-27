//最長共通部分列 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C
//要は何枚のコインで支払えますか問題。

// lcmとかはg++ -std=c++17 default.cppみたいなかんじで
//vector<vector<ll>> piyo(tate,vector<ll> (yoko));

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000019
#define ll long long
#define ln cout<<endl;
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define double long double
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
int dp[2000][2000];
vector<int> w(2000);
vector<int> v(2000);

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    //double mini=INF;
    int maxi=0;
    int i;
    double h;
    int n,x,m=5;
    int a,b,d,c;
    //int e,weight;
    int target;
    //targetが目的値、nが個数
    //ll _=1;

    while(1){
        cin>>n;
        if(n==0) return 0;
        vector<vector<ll>> v(n,vector<ll> (m));
        vector<vector<ll>> f(n,vector<ll> (m));
        ll sum=0;
        //vector<vector<ll>> v(n,vector<ll> (m));
        rep(i,n)rep(j,m) {cin>>v[i][j];f[i][j]=0;}
        ll endf=0;
        while(!endf){
            endf=1;
            rep(i,n) rep(j,m) f[i][j]=0;
            for(ll i=0;i<n;i++) {
                for(ll j=0;j<m-2;j++){
                    if(v[i][j]==0) continue;
                    if(v[i][j]!=v[i][j+1]) continue;
                    if(v[i][j]!=v[i][j+2]) continue;
                    f[i][j]=1;
                    f[i][j+1]=1;
                    f[i][j+2]=1;
                }
            }
            for(ll i=0;i<n;i++) {
                for(ll j=0;j<m;j++){
                    if(f[i][j]==1) {
                        sum+=v[i][j];
                        v[i][j]=0;
                        endf=0;
                    }
                }
            }



            for(ll j=0;j<m;j++){
                ll takasa=n-1;
                for(ll i=n-1;i>=0;i--){
                    if(f[i][j]==0){
                        v[takasa][j]=v[i][j];
                        takasa--;
                    }
                }
                for(i=takasa;i>=0;i--){
                   v[i][j]=0;
                }
            }
            /*
            rep(i,n){
                rep(j,m){
                    cout<<v[i][j]<<" ";
                }
                    cout<<endl;
            }
            cout<<endl;
*/
        }
        cout<<sum<<endl;

    }

    return 0;
}

