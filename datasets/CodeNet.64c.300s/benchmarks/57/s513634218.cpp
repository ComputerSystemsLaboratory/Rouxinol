#include<iostream>
using namespace std;
int H,W,ans,cnt;
int t[10][10000];
int main(){
  while(cin>>H>>W&&H&&W){
    for(int i=0;i<H;i++)
      for(int j=0;j<W;j++)
	cin>>t[i][j];
    ans=0;
    for(int S=0;S<(1<<H);S++){
      int cnt=0;
      for(int j=0;j<W;j++){
	int c=0;
	for(int i=0;i<H;i++){
	  if((S>>i)&1)c+=1-t[i][j];
	  else c+=t[i][j];
	}
	cnt+=max(c,H-c);
      }
      ans=max(ans,cnt);
    }
    cout<<ans<<endl;
  }
  return 0;
}