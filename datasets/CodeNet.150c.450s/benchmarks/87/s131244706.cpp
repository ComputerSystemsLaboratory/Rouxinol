#include<iostream>
using namespace std;

int map[10][5];
int h,w=5;

int chain(int y,int x,int p,int *cnt){
  int ans=0;
  if(x+1<w && map[y][x+1]==p &&p>0  ){
    (*cnt)++;
    ans=max(ans,chain(y,x+1,p,cnt));
  }
  if(*cnt>=3){
    map[y][x]=0;
    ans=*cnt;
    return ans*p;
  }
  return ans;
    
}

void dlt(){
    while(1){
    int f=0;
    for(int i=h-1;i>=0;i--)
      for(int j=w-1;j>=0;j--){
	if(map[i][j]==0 && i-1>=0)swap(map[i][j],map[i-1][j]);
	else if(map[i][j]==0)map[i][j]=-1;
      }
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++) if(map[i][j]==0)f=1;
    if(f==0) break;
  }
  
}

int main(){
  while(1){
  int ans=0,ansf=0;
  int cnt;
  cin>>h;
  if(h==0) break;
  for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>map[i][j];
  while(1){
    for(int i=0;i<h;i++)      
      for(int j=0;j<w;j++){
	cnt=1;
	ans+=chain(i,j,map[i][j],&cnt);
      }
    if(ansf==ans) break;
    ansf=ans;
    dlt();
  }
   cout<<ans<<endl;
  }
  return 0;
}