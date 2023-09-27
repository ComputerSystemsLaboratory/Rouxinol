#include<bits/stdc++.h>
#define P pair<int,int>
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<28
#define mk make_pair
using namespace std;
int main(){
  int n,m,t;
  cin>>n>>m>>t;
  vector<pair<int,int> >a[n];
  rep(i,m){
    int q,w,e;
    cin>>q>>w>>e;
    a[q].push_back(mk(w,e));
  }
    priority_queue<P,vector<P>,greater<P> >q;
    int d[n];
    fill(d,d+n,INF);
    q.push(mk(0,t));
    d[t]=0;
    while(!q.empty()){
      P p=q.top();q.pop();
      int v=p.second;
      if(d[v]<p.first)continue;
      for(int i=0;i<a[v].size();i++){
        P ed=a[v][i];
        if(d[ed.first]>d[v]+ed.second){
          d[ed.first]=d[v]+ed.second;
          if(d[ed.first]<-200000)goto L;
          q.push(mk(d[ed.first],ed.first));
        }
      }
    }
  rep(i,n){
    if(d[i]==INF)cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
if(0)L:cout<<"NEGATIVE CYCLE"<<endl;
}