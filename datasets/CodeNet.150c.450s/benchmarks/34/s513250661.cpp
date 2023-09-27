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

int dp[111];

signed main(){
    int N;
    while(cin>>N,N){
        dp[0]=1;
        for(int i=1;i<=N;i++){
            dp[i]=0;
            for(int j=1;j<=3;j++)if(i-j>=0)dp[i]+=dp[i-j];
        }
        cout<<((dp[N]+9)/10+364)/365<<endl;
    }
    return 0;
}