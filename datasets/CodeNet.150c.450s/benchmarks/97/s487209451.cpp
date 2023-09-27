#include<iostream>
#include<vector>
using namespace std;

struct P {int x,y;};

int main () {
  P p[4]={{-1,0},{0,-1},{1,0},{0,1}}; int n;
  while(cin>>n,n!=0){
    vector<P> v{{0,0}};int x0=0,y0=0,x1=0,y1=0;
    for(int i=1;i<n;++i){
      int a,b,x,y;cin>>a>>b;v.push_back({x=v[a].x+p[b].x,y=v[a].y+p[b].y});
      x0=min(x0,x);y0=min(y0,y);x1=max(x1,x);y1=max(y1,y);
    }
    cout<<x1-x0+1<<' '<<y1-y0+1<<endl;
  }
}