#include<iostream>
#include<cmath>
#define INF 1000000
#define N 9
using namespace std;

int d[N][N];
int ans[N];
//初期化
void init(){
  for(int i=0;i<N;i++){
      ans[i]=0;
    for(int j=0;j<N;j++){
      if(i==j) d[i][i]=0;
      else d[i][j]=INF;
    }
  }
}
void solve(int n){
  init();
  int a,b,t;
  //値代入
  for(int i=0;i<n;i++){
    cin>>a>>b>>t;
    d[a][b]=d[b][a]=t; //無向辺
  }
  //ワーシャルフロイド
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      for(int k=0;k<N;k++){
        d[j][k]=min(d[j][k],d[j][i]+d[i][k]);
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(d[i][j]==INF) continue;
      ans[i]+=d[i][j]; //距離の累積和
    }
  }
  int answer=INF,town;
  for(int i=0;i<N;i++){
    if(ans[i]!=0&&answer>ans[i]){
      answer=ans[i]; town=i;
    }
  }
  cout<<town<<" "<<answer<<"\n";

}
int main(){
  int n;
  cin>>n;
  while(n!=0){solve(n);cin>>n;}

}

