#include <iostream>
#include <cstdio>
using namespace std;

typedef struct{
  int x,y;
} position;

int main(){
  int x;
  for(;;){
    cin >> x;
    if(x==0)break;
    position p[x+1];
    p[0].x=0;
    p[0].y=0;
    int l=0,b=0,r=0,t=0;
    int n,d;
    for(int i = 1;i<x;++i){
      cin >> n >> d;
      switch(d){
      case 0 : p[i].x=p[n].x-1; p[i].y=p[n].y; if(p[i].x<l)l=p[i].x; break;
      case 1 : p[i].x=p[n].x; p[i].y=p[n].y-1; if(p[i].y<b)b=p[i].y; break;
      case 2 : p[i].x=p[n].x+1; p[i].y=p[n].y; if(p[i].x>r)r=p[i].x; break;
      case 3 : p[i].x=p[n].x; p[i].y=p[n].y+1; if(p[i].y>t)t=p[i].y; break;
      }
    }
    printf("%d %d\n",r-l+1,t-b+1);
  }
}