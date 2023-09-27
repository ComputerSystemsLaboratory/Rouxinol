#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,memo[1111][1111];
  string x,y;
  memset(memo,0,sizeof(memo));
  cin>>n;
  for(int count=0;count<n;count++){
    cin>>x>>y;
    int h=x.size(),w=y.size();
    for(int i=0;i<=w;i++){
      for(int j=0;j<=h;j++){
	if(i==0||j==0) continue;
	if(x[j-1]==y[i-1]){
	  memo[i][j]=max(memo[i-1][j-1]+1,memo[i][j-1]);
	}else if(x[j-1]!=y[i-1]){
	  memo[i][j]=max(memo[i-1][j],memo[i][j-1]);
	}
      }
    }
    cout<<memo[w][h]<<endl;
  }
  return(0);
}

