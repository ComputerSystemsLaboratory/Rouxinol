#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n;

int data[100];
int allsum;
long long int dp[100][21];

long long int check(int i,int sum)
{
  //  cerr<<i<<" "<<sum<<endl;

  if(sum>20 || sum<0)
    return 0;
  if(i>=n-1)
    return 0;
  if(dp[i][sum]!=-1)
    return dp[i][sum];
  if(i==n-2)
    {
      if(sum==allsum)
        return 1;
      else
        return 0;
    }

  long long int ans=check(i+1,sum+data[i+1])+check(i+1,sum-data[i+1]);

  dp[i][sum]=ans;
  return dp[i][sum];
}

int main()
{
  cin>>n;
  for(int i=0;i<n-1;i++)
    {
      cin>>data[i];
    }
  cin>>allsum;
  memset(dp,-1,sizeof(dp));

  long long int ans=check(0,data[0]);
  cout<<ans<<endl;

}