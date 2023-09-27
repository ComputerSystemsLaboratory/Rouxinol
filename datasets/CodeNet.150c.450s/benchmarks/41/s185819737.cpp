// GRL_1_C
#include <bits/stdc++.h>
#define endl "\n"
#define rep(i,n) for(int i=0;i<int(n);i++)
#define e_b emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
template <class T>ostream &operator<<(ostream &o,const vector<T>&v) //vectorの中身を見る
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}
void map_p(map<int,int>& d){cout<<"map: ";for(auto a : d){cout<<"{"<<a.first<<":"<<a.second<<"}";}cout<<endl;} //mapの中身を見る
void set_p(set<int>& d){cout<<"set: ";for(int a : d){cout<<a<<" ";}cout<<endl;} //setの中身を見る

ll inf=pow(10,18);
vector<vector<ll>> dp(110,vector<ll>(110,inf));
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    int v,e;
    cin>>v>>e;
    rep(i,v){
        dp[i][i]=0;
    }
    rep(i,e){
        ll s,t,d;
        cin>>s>>t>>d;
        dp[s][t]=d;
    }
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(dp[i][k]<inf && dp[k][j]<inf) dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    bool flag=true;
    rep(i,v){
        if(dp[i][i]<0){
            flag=false;
            break;
        } 
    }
    if(flag){
        rep(i,v){
            rep(j,v-1){
                if(dp[i][j]==inf) cout<<"INF"<<" ";
                else cout<<dp[i][j]<<" ";
            }
            if(dp[i][v-1]==inf) cout<<"INF"<<endl;
            else cout<<dp[i][v-1]<<endl;
        }
    }else cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
}
