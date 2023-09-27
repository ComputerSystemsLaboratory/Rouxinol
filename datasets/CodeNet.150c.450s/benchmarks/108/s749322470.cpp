#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<cmath>
#include<queue> 
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
 
int main(){
  queue <int> q1;
  int n,i,j;
  cin >> n;
  int d[n][n];
  int m[n];
  int v[n];
  rep(i,n){
    m[i]=10000;
    v[i]=0;
    rep(j,n){
      if(i==j){
        d[i][j]=0;
      }else{
        d[i][j]=10000;
      }
    }
  }
  m[0]=0;

  rep(i,n){
    int u,k;
    cin >> u >> k;
    if(k>0){
      rep(j,k){
        int v;
        cin >> v;
          d[u-1][v-1]=1;
      }
    }
  }   

  q1.push(0);
  while(!q1.empty()){
    int u = q1.front(); q1.pop();
      rep(j,n){
        if(d[u][j]==1 && v[j]==0){
          q1.push(j);
          m[j] = min(m[j],m[u]+1);
        }
      }
    v[u]=1;
  }

  rep(i,n){
    cout << i+1 << ' ';
    if(m[i]==10000){
      cout << -1 << endl;
    }else{
      cout << m[i] << endl;
    }
  }

  return 0;
}
 