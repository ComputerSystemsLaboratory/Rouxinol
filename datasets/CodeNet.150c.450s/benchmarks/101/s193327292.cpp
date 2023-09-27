#include<bits/stdc++.h>
using namespace std;
int par[100005];
int ra[100005];
void init(int n){
  for(int i=0;i<n;i++){
    par[i]=i;
    ra[i]=0;
  }
}
int find(int x){
  if(par[x]==x){
    return x;
  }
  else{
    return par[x]=find(par[x]);
  }
}
void unite(int x,int y){
  x=find(x);
  y=find(y);
  if(x==y)return;
  if(ra[x]<ra[y]){
    par[x]=y;
  }
  else{
    par[y]=x;
    if(ra[x]==ra[y])ra[x]++;
  }
}
bool same(int x,int y){
  return find(x)==find(y);
}

int main(){
  int n,m;
  cin >> n >> m;
  init(n);
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;
    unite(a,b);
  }
  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int a,b;
    cin >> a >> b;
    if(same(a,b))cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}