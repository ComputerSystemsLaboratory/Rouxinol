#include <iostream>
#include <algorithm>
#include <vector>
#define N1 1501
#define N2 1000
using namespace std;
int dh[N1*N2],dw[N1*N2];
int main(){
  int N,M,h[N1],w[N1];
  vector<int> H,W;
  while(1){
    cin >> N >> M;
    if(N==0&&M==0) break;
    for(int i=0;i<N;i++){
      cin >> h[i];
      if(i>0) h[i]+=h[i-1];
    }
    for(int i=0;i<M;i++){
      cin >> w[i];
      if(i>0) w[i]+=w[i-1];
    }
    for(int i=0;i<N1*N2;i++) dh[i]=dw[i]=0;
    int l=1;
    while(l!=N+1){
      for(int i=l-1;i<N;i++){
	dh[h[i]-h[i-l]]++;
      }
      l++;
    }
    l=1;
    while(l!=M+1){
      for(int i=l-1;i<M;i++){
	dw[w[i]-w[i-l]]++;
      }
      l++;
    }/*
    sort(H.begin(),H.end());
    sort(W.begin(),W.end());
    for(int i=0;i<N1;i++){
      for(int j=0;j<N2;j++){
	dh[i][j]=dw[i][j]=0;
      }
    }
    H.clear();
    W.clear();
    */
    int sum=0;
    for(int i=0;i<N1*N2;i++){
      if(dh[i]!=0&&dw[i]!=0) sum+=dh[i]*dw[i];
    }
    cout << sum << endl;
  }
  return 0;
}