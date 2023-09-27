#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <tuple>
using namespace std;
using ll=long long;
using R=double;

int W,H;

int t[50][50];

void visit(int h,int w){
  t[h][w]=0;
  for(int nh=h-1;nh<h+2;nh++){
    for(int nw=w-1;nw<w+2;nw++){
      if(t[nh][nw]==1&&0<=nh&&0<=nw&&nh<H&&nw<W)visit(nh,nw);
    }
  }
}

int main(void){
  int a,b,c,n;
  while(1){
    cin>>W>>H;
    c=0;
    if(W==0&&H==0)break;
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
    cin>>t[i][j];
      }
    }
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
    if(t[i][j]==1){
      c++;
      visit(i,j);
    }
      }
    }
    cout<<c<<endl;
  }
}

