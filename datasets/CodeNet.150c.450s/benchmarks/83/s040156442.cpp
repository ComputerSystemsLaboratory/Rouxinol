#include <iostream>
#include <algorithm>
using namespace std;

int v[101]={0};
int w[101];


int m[101][10001]={0};

int knap(int i,int W,int N){
  
  if(i==N){
    return 0;
  }
  if(m[i][W]!=0){
    return m[i][W];
  }
  if(W-w[i]>=0){
    m[i][W]=max(knap(i+1,W-w[i],N)+v[i],knap(i+1,W,N));
    return m[i][W];
  }else if (W-w[i]<0){
    m[i][W]=knap(i+1,W,N);
    return m[i][W];
  }
}

int main(){
  int N,W;
  cin >>  N >> W;
  for(int i=0;i<N;i++){
    cin >> v[i] >> w[i];
  }
  cout << knap(0,W,N) << endl;
  return 0;
}