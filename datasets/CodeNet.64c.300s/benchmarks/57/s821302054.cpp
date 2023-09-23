#include<bits/stdc++.h>
#define R 10
#define C 10000
using namespace std;

int main(){
  int r,c,d[R][C],dcp[R][C],sum[C],cnt,ans;
  while(1){
    cin>>r>>c;
    if(!r&&!c)break;
    for(int i=0;i<r;i++)
      for(int j=0;j<c;j++)
	cin>>d[i][j],dcp[i][j]=d[i][j];
    ans=0;
    for(int i=0;i<(1<<r);i++){
      for(int j=0;j<r;j++)
	for(int k=0;k<c;k++)
	  d[j][k]=dcp[j][k];
      memset(sum,0,sizeof(sum));
      for(int j=0;j<r;j++){
	if(i&(1<<j)){
	  for(int k=0;k<c;k++)
	    d[j][k]=!d[j][k];
	}
	for(int k=0;k<c;k++)
	  sum[k]+=d[j][k];
      }
      cnt=0;
      for(int j=0;j<c;j++){
	if(sum[j]<r-sum[j])sum[j]=r-sum[j];
	cnt+=sum[j];
      }
      ans=max(ans,cnt);
    }
    cout<<ans<<endl;
  }
  return 0;
}