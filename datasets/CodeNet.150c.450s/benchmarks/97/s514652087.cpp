#include<iostream>
using namespace std;

int main(){
  while(1){
    int N;
    cin>>N;
    if(N==0) break;
    int p[1000][1000]={};
    int px[4]={-1,0,1,0};
    int py[4]={0,-1,0,1};

    p[500][500]=1;

    int n,d;
    int x=500,y=500;
    int f[1000][1000];
    for(int i=0;i<1000;i++)
      for(int j=0;j<1000;j++) f[i][j]=10000000;

    f[x][y]=0;

    for(int i=1;i<=N-1;i++){
      cin>>n>>d;
      for(int k=0;k<1000;k++){
	for(int j=0;j<1000;j++){
	  if(f[k][j]==n){
	    p[k+px[d]][j+py[d]]=1;
	    x=k+px[d],y=j+py[d];
	    f[x][y]=i;
	  }
	}
      }
    }
    int count=0;
    int qx,qy;
    int max=0,miy=1000000;
    int mix=100000,may=0;

    for(int i=0;i<1000;i++){
      for(int j=0;j<1000;j++){
	if(p[i][j]==1){
	  qx=i;
	  qy=j;
	  if(max<qx) max=qx;
	  if(mix>qx) mix=qx; 
	  if(may<qy) may=qy;
	  if(miy>qy) miy=qy;
	}
      }
    }

  cout<<max-mix+1<<" "<<may-miy+1<<endl;
}
return 0;
}