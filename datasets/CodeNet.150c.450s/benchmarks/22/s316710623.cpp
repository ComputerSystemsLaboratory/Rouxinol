#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
//bellman_ford
typedef struct E{
  int to,cost;
}edge;
const int MAX_V=1010;
const int Inf=1e9;
vector<vector<edge> >E(MAX_V);
int d[MAX_V];
bool bellman_ford(int s,int n) { // nは頂点数、sは開始頂点
  fill_n(d,MAX_V,Inf);
  d[s]=0;
  for (int i=0;i<n;i++) {
    for (int v=0;v<n;v++) {
      for (int k=0;k<E[v].size();k++) {
        edge e=E[v][k];
        if (d[v]!=Inf&&d[e.to]>d[v]+e.cost) {
          d[e.to]=d[v]+e.cost;
          if(i==n-1)return true; // n回目にも更新があるなら負の閉路が存在
        }
      }
    }
  }
  return false;
}
int main(){
  int a,b,r;cin>>a>>b>>r;
  for(int i=0;i<b;i++){
    int s;edge e;
    cin>>s>>e.to>>e.cost;
    E[s].pb(e);
  }
  if(bellman_ford(r,a)){
    cout<<"NEGATIVE CYCLE"<<endl;
  }else{
    for(int i=0;i<a;i++){
      if(d[i]==Inf)
	cout<<"INF"<<endl;
      else
	cout<<d[i]<<endl;
    }
  }
  return 0;
}

