#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
using mii=map<int,int>;
using psi=pair<string,int>;
using pii=pair<int,int>;
using vlai=valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define MOD (1e9+7)
void solve(int r,int c){
    vector<vector<bool>> v(r,vector<bool>(c));
    int ans=0;
    int in;
    rep(i,r){
        rep(j,c){
            cin>>in;
            v[i][j]=in;
        }
    }
    vector<vector<bool>> vvv(r,vector<bool>(c));
    rep(i,pow(2,r)){
        int a=i;
        rep(j,r){
            rep(k,c){
                vvv[j][k]=((a&1)?v[j][k]:!v[j][k]);
            }
            a>>=1;
        }
        int tmp=0;
        // rep(j,r){
        //     rep(k,c){
        //         cout<<(vvv[j][k]?1:0);
        //     }
        //     cout<<endl;
        // }
        
        rep(k,c){
            int t=0;
            rep(j,r)if(vvv[j][k])t++;
            tmp+=max(t,r-t);
        }
        //cout<<tmp<<endl;
        ans=max(ans,tmp);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    int a,b;
    while(cin>>a>>b,a){
        solve(a,b);
    }
}
