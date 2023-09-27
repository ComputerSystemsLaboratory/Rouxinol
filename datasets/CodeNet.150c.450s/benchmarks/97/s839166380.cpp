#include <iostream>
#include <algorithm>
using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

int main(){
  int N;
  int x[205],y[205];
  while(1){
    cin>>N;
    if(N==0)break;
    int maxx,minix,maxy,miniy;
    maxx=maxy=minix=miniy=0;
    x[0]=y[0]=0;
    for(int i=1;i<N;i++){
      int n,d;
      cin>>n>>d;
      x[i]=x[n]+dx[d];
      y[i]=y[n]+dy[d];
      maxx=max(maxx,x[i]);
      maxy=max(maxy,y[i]);
      minix=min(minix,x[i]);
      miniy=min(miniy,y[i]);
    }
    cout<<maxx-minix+1<<" "<<maxy-miniy+1<<endl;
  }
  return 0;
}