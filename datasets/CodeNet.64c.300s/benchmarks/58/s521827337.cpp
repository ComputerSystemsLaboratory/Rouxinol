#include<iostream>
using namespace std;
char mape[111][111];
int m,n;
int co;
int da[]={0,0,1,-1};
int db[]={1,-1,0,0};
void dfs(int x,int y,char c){
  mape[x][y]=0;
  for(int i=0;i<4;i++)
    if(x+da[i]>=0&&x+da[i]<m&&y+db[i]>=0&&y+db[i]<n&&mape[x+da[i]][y+db[i]]==c)
      dfs(x+da[i],y+db[i],c);
}
int main(){
  while(cin>>m>>n&&m+n>0){
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
	cin>>mape[i][j];
    co=0;
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
	if(mape[i][j]>0){
	  co++;
	  dfs(i,j,mape[i][j]);
	}
    cout<<co<<"\n";
  }
}