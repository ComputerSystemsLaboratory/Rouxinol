#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;

#define PB push_back

bool dp[2001];


int main(int argc,char* argv[]){
  int n,q,x,i,j,MAX,tmp_MAX;
  queue<int> m;
  memset(dp,0,sizeof(dp));
  dp[0]=true;
  MAX=0;
  
  cin>>n;
  for(i=0;i<n;i++){
    cin>>x;
    tmp_MAX=0;

    for(j=MAX;j>=0;j--){
      if(dp[j]){
	if(tmp_MAX<j+x) tmp_MAX=j+x;

	dp[j+x]=true;
      }
    }
    MAX=tmp_MAX;
  }

  cin>>q;
  for(i=0;i<q;i++){
    cin>>x;
    if(dp[x])
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }

  return 0;
}