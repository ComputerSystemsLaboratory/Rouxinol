#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
  int n,m,t1,t2,c[100000]={}; vector <int> g[100000];
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>t1>>t2;
    g[t1].push_back(t2);
    g[t2].push_back(t1);
  }
  int l;cin>>l;
  for(int i=0;i<n;i++) if(!c[i]){
      queue <int> q; bool f[100000]={};
      q.push(i);f[i]=true;c[i]=i+1;
      for(;!q.empty();){
        for(int j=0;j<g[q.front()].size();j++){
          int v=g[q.front()][j];
          if(!f[v]){
            f[v]=true;c[v]=i+1;
            q.push(v);
          }
	}
          q.pop();
      }
    }
  for(int i=0;i<l;i++){
    cin>>t1>>t2;
    if(c[t1]==c[t2]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}