#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#define pa pair<int,int>
#define pb push_back
using namespace std;

int u,d,r,l;
vector<pa> p;
void addnum(int x,int y){
  if(y==0){
    p.pb(pa(p[x].first-1,p[x].second));
    l=min(l,p[x].first-1);
  }
  else if(y==1){
    p.pb(pa(p[x].first,p[x].second-1));
    d=min(d,p[x].second-1);
  }
  else if(y==2){
    p.pb(pa(p[x].first+1,p[x].second));
    r=max(r,p[x].first+1);
  }
  else if(y==3){
    p.pb(pa(p[x].first,p[x].second+1));
    u=max(u,p[x].second+1);
  }
}
int main(void){
  int n,i;
  int x,y;
  while(scanf("%d",&n),n){
    p.clear();
    u=d=r=l=0;
    p.pb(pa(0,0));
    for(i=0;i<n-1;i++){
      scanf("%d %d",&x,&y);
      addnum(x,y);
    }
    printf("%d %d\n",r-l+1,u-d+1);
  }
  return 0;
}