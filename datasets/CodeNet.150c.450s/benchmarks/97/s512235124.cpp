#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 300
int dy[]={0,1,0,-1};
int dx[]={-1,0,1,0};
int N,ay,ax,by,bx;
int py[MAX],px[MAX];

int main(){
  while(1){
    cin>>N;
    if(N==0)break;
    ay=ax=by=bx=0;
    for(int i=1;i<N;i++){
      int a,b;
      cin>>a>>b;
      py[i]=py[a]+dy[b];
      ay=min(ay,py[i]);
      by=max(by,py[i]);
      px[i]=px[a]+dx[b];
      ax=min(ax,px[i]);
      bx=max(bx,px[i]);
    }
    cout<<1+bx-ax<<' '<<1+by-ay<<endl;
  }
  return 0;
}