#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#define N 100000

using namespace std;
vector<int> v[N];
int group[N]={};
int g=0;

bool search(int s,int t){
  if(group[s]==group[t]&&group[s]>0) return true;
  if(group[s]>0) return false;
  group[s]=++g;
  queue<int> q;
  q.push(s);
  while(!q.empty()){
    int a=q.front();
    for(auto i=v[a].begin();i!=v[a].end();i++){
      if(group[*i]==0){
        group[*i]=g;
        q.push(*i);
      }
    }
    q.pop();
  }
  if(group[s]==group[t]&&group[s]>0){ 
    return true;
  }else{
    return false;
  }
}

int main(){
  int n,m; cin>>n>>m;
  int s,t;
  for(int i=0;i<m;i++){
    cin>>s>>t;
    v[s].push_back(t);
    v[t].push_back(s);
  }

  int q; cin>>q;
  for(int i=0;i<q;i++){
    cin>>s>>t;
    if(search(s,t)){
      cout<<"yes"<<endl;
    }else{
      cout<<"no"<<endl;
    }
  }

}