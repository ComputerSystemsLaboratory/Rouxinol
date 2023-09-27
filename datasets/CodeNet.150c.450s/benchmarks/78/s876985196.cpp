#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;++i)
#define SZ(a) (int)((a).size())
#define mp make_pair
#define pb push_back
#define F first
#define S second
typedef pair<int,int> PI;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};


int dp[1200000];
int odp[1200000];
int n;
void solve(){
  
}

int main(){
  rep(i,1200000) dp[i]=1<<28;
  rep(i,1200000) odp[i]=1<<28;

  dp[0]=0;
  odp[0]=0;
  
  for(int i=1;;++i){
    int p = i*(i+1)*(i+2)/6;
    if(p>1100000) break;
    //cout <<  i << endl;
    for(int j=0;j+p<1200000;++j)
      dp[j+p]=min(dp[j+p],dp[j]+1);
    if(p&1)
      for(int j=0;j+p<1200000;++j)
        odp[j+p]=min(odp[j+p],odp[j]+1);
      // for(int j=110000-p;j>=0;--j)
      //   odp[j+p]=min(odp[j+p],odp[j]+1);
  }
  
  //return 0;
  
  while(cin >> n,n) cout << dp[n] << " " << odp[n] << endl;
}