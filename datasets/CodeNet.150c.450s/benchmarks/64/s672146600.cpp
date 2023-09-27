#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;

#define PB push_back

bool dp[21][2001];


int main(int argc,char* argv[]){
  int n,q,x,i,j,val,tmp;
  queue<int> m;
  int w[21];
  memset(dp,0,sizeof(dp));
  dp[0][0]=true;
  
  cin>>n;
  for(i=1;i<=n;i++)
    cin>>w[i];

  cin>>q;
  for(i=0;i<q;i++){
    cin>>x;
    m.push(x);
  }

  while(!m.empty()){
    val=m.front();m.pop();

    for(i=1;i<=n;i++){
      tmp=w[i];
      for(j=0;j<=val;j++){

	if(j>=tmp){
	  if(dp[i-1][j] || dp[i-1][j-tmp])
	    dp[i][j]=true;
	}
	else
	  if(dp[i-1][j])
	    dp[i][j]=true;
      }
    }
    
    if(dp[n][val])
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }
  return 0;
}