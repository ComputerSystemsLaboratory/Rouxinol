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

int dp[111][21];

signed main(){
    int N;
    cin>>N;
    int a;cin>>a;
    dp[0][a]=1;
    for(int i=1;i+1<N;i++){
        cin>>a;
        for(int j=0;j<=20;j++){
            if(j+a<=20)dp[i][j+a]+=dp[i-1][j];
            if(j-a>=0)dp[i][j-a]+=dp[i-1][j];
        }
    }
    cin>>a;
    cout<<dp[N-2][a]<<endl;
    return 0;
}