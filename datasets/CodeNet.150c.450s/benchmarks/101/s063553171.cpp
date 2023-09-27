#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> list[100000];
int num[100000];
int n,m;

void bfs(int s,int sign){

  queue<int> Q;
  Q.push(s);

  while(!Q.empty()){
    int k=Q.front(); Q.pop();
    for(int i=0;i<list[k].size();i++){
      int temp=list[k][i];
      if(num[temp]==-1){ //未訪問なら
        Q.push(temp); num[temp]=sign;
      }
    }
  }
}
int main(){

  cin>>n>>m;

  for(int i=0;i<m;i++){
    int u,v; cin>>u>>v;
    list[u].push_back(v);
    list[v].push_back(u);
  }
  fill(num,num+100000,-1);
  int q; cin>>q;

  int sign=0;
  for(int i=0;i<n;i++){
    if(num[i]==-1){
      bfs(i,sign++);
    }
  }
  for(int i=0;i<q;i++){
    int s,t; cin>>s>>t;
    if(num[s]==num[t] && (num[s]!=-1 || num[t]!=-1)){
      cout<<"yes\n";
    }else{
      cout<<"no\n";
    }
  }

}

