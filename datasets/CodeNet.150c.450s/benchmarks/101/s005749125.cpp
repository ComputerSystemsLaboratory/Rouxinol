#include<bits/stdc++.h>
using namespace std;

int n,m,q,s,t;
int tree[100002];
int sn[100002];
list<int>l[100002];

int slv(int x,int id);

int main(){
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>s>>t;
    l[s].push_back(t);
    l[t].push_back(s);
  }

  for(int i=0;i<n;i++){
    tree[i]=-1;
    sn[i]=0;
  }
  int id=1;
  for(int i=0;i<n;i++){
    if(tree[i]==-1){
      slv(i,id);
      id++;
    }
  }

  cin>>q;
  for(int i=0;i<q;i++){
    cin>>s>>t;
    if(tree[s]==tree[t])cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }

  return(0);
}

int slv(int x,int id){
  tree[x]=id;
  sn[x]=1;
  for(int i=0;i<l[x].size();i++){
    int y=l[x].front();
    l[x].pop_front();
    l[x].push_back(y);
    if(sn[y]==0){
      slv(y,id);
    }
  }
  return(0);
}