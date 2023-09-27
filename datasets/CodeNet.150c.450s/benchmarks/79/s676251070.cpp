#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)

int n, m;
int data[100];

void shuffle(int x, int y){
  int dst[100];
  for(int i=x-1;i<x-1+y;++i){
    dst[i-x+1]=data[i];
  }
  for(int i=x-2;i>=0;--i){
    data[i+y]=data[i];
  }
  for(int i=0;i<y;i++){
    data[i]=dst[i];
  }
}

void init(){
  rep(i,n)
    data[i]=n-i;
}

int main() {
  while(true){
    scanf("%d%d",&n,&m);
    if (!n&&!m)break;
    init();
    rep(_,m) {
      int x, y;
      scanf("%d%d",&x,&y);
      shuffle(x,y);
    }
    printf("%d\n",data[0]);
  }
  return 0;
}