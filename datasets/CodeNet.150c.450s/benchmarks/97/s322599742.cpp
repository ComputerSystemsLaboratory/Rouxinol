#include<iostream>
using namespace std;

int main(){
  int n;
  int maxx,maxy;
  int minx,miny;
  int x[300];
  int y[300];
  int dy[4]={0,-1,0,1};
  int dx[4]={-1,0,1,0};
  while(cin>>n,n){
    x[0]=0;
    y[0]=0;
    maxx=maxy=minx=miny=0;
    for(int i=1;i<n;i++){
      int a,b;
      cin>>a>>b;
      x[i]=x[a]+dx[b];
      y[i]=y[a]+dy[b];
      maxx=max(maxx,x[i]);
      maxy=max(maxy,y[i]);
      minx=min(minx,x[i]);
      miny=min(miny,y[i]);
    }
    cout << maxx - minx + 1  << " " << maxy - miny + 1 << endl;
  }
  return 0;
}