#include<bits/stdc++.h>
using namespace std;
int main(){
  int r,c,p[10][10000],ans;
  while(cin>>r>>c,r){
    ans=0;    
    for(int i=0;i<r;i++)
      for(int j=0;j<c;j++)
	cin>>p[i][j];
    
    for(int i=0;i<(1<<r);i++){
      int t=0;
      for(int l=0;l<c;l++){
	int a=0;
	for(int j=0,k=1;j<r;j++,k*=2){
	  if(i/k%2)a+=!p[j][l];
	  else a+=p[j][l];
	}
	t+=max(a,r-a);
      }
      ans=max(ans,t);
    }
    cout<<ans<<endl;
  }
  return 0;
}