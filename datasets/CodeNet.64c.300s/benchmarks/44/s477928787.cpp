#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
#define MAX_N 305
using namespace std;
bool debug=false;

int d[12][12];

void init(){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(i==j) d[i][j]=0;
      else d[i][j]=INF;
    }
  }
}

void make(int n){
  int a,b,c;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    d[a][b]=c;d[b][a]=c;
  }
}

void wf(){
  for(int k=0;k<10;k++){
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
	d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
}

void solve(){
  int mini=INF,num;
  for(int i=0;i<=10;i++){
    int sum=0;
    for(int j=0;j<=10;j++){
      if(d[i][j]!=INF)sum+=d[i][j];
    }
    if(sum<mini&&sum!=0){
      mini=sum;
      num=i;
    }
  }
  cout<<num<<" "<<mini<<endl;
}

int main(){
  int n;
  while(cin>>n){
    if(n==0)break;
    init();
    make(n);
    wf();
    solve();
  }
  return 0;
}