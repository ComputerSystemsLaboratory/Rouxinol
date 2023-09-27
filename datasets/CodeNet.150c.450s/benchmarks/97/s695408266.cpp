#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int x[200],y[200];
  x[0]=y[0]=0;
  while(cin>>n,n){
    for(int i=1;i<n;++i){
      int num,d,dx[]={-1,0,1,0},dy[]={0,-1,0,1};
      cin>>num>>d;
      x[i]=x[num]+dx[d];
      y[i]=y[num]+dy[d];
    }
    int maxx=0,minx=10000,maxy=0,miny=10000;
    for(int i=0;i<n;++i){
      maxx=max(maxx,x[i]);
      minx=min(minx,x[i]);
      maxy=max(maxy,y[i]);
      miny=min(miny,y[i]);
    }
    cout<<maxx-minx+1<<" "<<maxy-miny+1<<endl;
  }
  return 0;
}
    