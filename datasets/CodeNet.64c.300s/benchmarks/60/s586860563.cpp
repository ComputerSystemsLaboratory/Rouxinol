#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int H,W;
bool ng[20][20];
int dp[20][20];
signed main(){
    while(cin>>W>>H,W||H){
        memset(ng,0,sizeof(ng));
        int N;cin>>N;
        rep(i,N){
            int x,y;
            cin>>x>>y;
            x--;y--;
            ng[y][x]=true;
        }
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        rep(i,H)rep(j,W){
            if(ng[i][j])dp[i][j]=0;
            dp[i+1][j]+=dp[i][j];
            dp[i][j+1]+=dp[i][j];
        }
        cout<<dp[H-1][W-1]<<endl;
    }
    return 0;
}