#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,n,d;
  int mxx,mxy,mnx,mny;
  int dx[4]={-1,0,1,0};
  int dy[4]={0,-1,0,1};
  while(1){
    cin>>N;
    if(N==0) break;
    mxx=mxy=mnx=mny=0;
     vector<int> x(N),y(N);
     for(int i=1;i<N;i++){
       cin>>n>>d;
       x[i]=x[n]+dx[d];
       y[i]=y[n]+dy[d];
       mxx=max(mxx,x[i]);
       mnx=min(mnx,x[i]);
       mxy=max(mxy,y[i]);
       mny=min(mny,y[i]);
     }
     cout<<mxx-mnx+1<<" "<<mxy-mny+1<<endl;
  }
  return 0;
}

