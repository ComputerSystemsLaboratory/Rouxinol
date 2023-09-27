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
typedef struct E{
  int to,cost;
}edge;
const int MAX_V=200100;
const int Inf=1e9;
vector<vector<edge> >E(MAX_V);
int d[MAX_V];
void dijkstra(int s){
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >que;
  fill_n(d,MAX_V,Inf);
  d[s] = 0;
  que.push(pair<int,int>(0,s));
  while(!que.empty()){
    pair<int,int> p=que.top();que.pop();
    int v = p.second;
    if(d[v]<p.first)continue;
    for(int j=0;j<E[v].size();j++){
      edge t = E[v][j];
      if(d[t.to]>d[v]+t.cost){
	d[t.to]=d[v]+t.cost;
	que.push(pair<int,int>(d[t.to],t.to));
      }
    }
  }
}
int main(){
  int a,b,r;cin>>a>>b>>r;
  for(int i=0;i<b;i++){
    edge e;
    int s;cin>>s>>e.to>>e.cost;
    E[s].pb(e);
  }
  dijkstra(r);
  for(int i=0;i<a;i++){
    if(d[i]==Inf)cout<<"INF"<<endl;
    else
      cout<<d[i]<<endl;
  }
  return 0;
}

