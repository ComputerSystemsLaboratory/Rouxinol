#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define INF 1000000001
#define MOD 100000
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const ull B=100000007;
ull dp[100][21];
int main(){
      int n;
      int a[100];
      cin>>n;
      REP(i,n)cin>>a[i];
      REP(i,n){
            if(i==0)dp[0][a[i]]=1;
            else{
                  REP(j,21){
                        if(dp[i-1][j]==0)continue;
                        if(j+a[i]<=20)dp[i][j+a[i]]+=dp[i-1][j];
                        if(j-a[i]>=0)dp[i][j-a[i]]+=dp[i-1][j];
                  }
            }
      }
//      REP(i,n)REP(j,21)printf("%llu%c",dp[i][j],j==20?'\n':' ');
      cout<<dp[n-1][0]<<endl;
}