#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef vector<int> vi;
vi ans,ans2;
const int inf=1e9;
int polnum[205];
int dp[1000005];
int odddp[1000005];
int ntet=0;
void ready()
{
  for(;;ntet++)
  {
    polnum[ntet]=ntet*(ntet+1)*(ntet+2)/6;
    if(polnum[ntet]>=1000000) break;
  }
  for(int i=0;i<=1000000;i++)
    {
      dp[i]=odddp[i]=inf;
    }
    dp[0]=odddp[0]=0;
}

int main()
{
  ready();
  int mx=0;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<=1000000;j++)
    {
      for(int k=0;k<ntet;k++)
      {
				if(j+polnum[k]>=1000000) break;
				if(polnum[k]%2==1) odddp[j+polnum[k]]=min(odddp[j+polnum[k]],odddp[j]+1);
				dp[j+polnum[k]]=min(dp[j+polnum[k]],dp[j]+1);
				mx=max(mx,j+polnum[k]);
				mx=min(mx,1000000-1);
      }
    }
  }
  int n;
  while(cin >> n,n) cout << dp[n]<<" " << odddp[n] << endl;
  return 0;
}

