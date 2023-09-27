#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void unite(int, int);
bool same(int, int);
int root(int);
int p[10000], s[10000];

int main(){
  int n, q, com, x, y, comc=0, ans[100000];
  cin >> n >> q;
  for(int i=0;i<n;i++){
    p[i]=i;
    s[i]=1;
  }
  for(int i=0;i<q;i++){
    cin >> com >> x >> y;
    if(com == 0){
      unite(x, y);
    }else if(com==1){

      cout<<same(x,y)<<endl;

    }
  }

  return 0;
}

void unite(int x, int y){
  x = root(x);
  y = root(y);
  if(s[x]<s[y]){
    swap(x, y);
  }
  if(x!=y){
    p[y]=x;
    s[x]+=s[y];
  }
}

int root(int x){
  vector< int > v;
  while(p[x]!=x){
    v.push_back(x);
    x=p[x];
  }
  for(int i=0;i<v.size();i++){
    p[v[i]]=x;
  }
  return x;
}

bool same(int x, int y){
  x=root(x);
  y=root(y);
  if(x==y){
    return true;
  }
  return false;
}