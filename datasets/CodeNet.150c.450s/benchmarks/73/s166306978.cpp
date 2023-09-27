#include<bits/stdc++.h>

using namespace std;

const int LOGSZ = 17;

int tree[(1<<LOGSZ) + 1];
int n = (1<<LOGSZ);

void add(int x, int v){
  while(x<=n){
    tree[x] += v;
    x+= (x & -x);
  }
}

int get(int x){
  int ans = 0;
  while(x){
    ans += tree[x];
    x-= (x & -x);
  }
  return ans;
}


int rsq(int x, int y){
    return get(y) - get(x - 1);
}


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifdef Larra
  freopen("in","r",stdin);
  freopen("out","w",stdout);
  #endif
  int n,q;
  cin>>n>>q;
  for(int i = 0; i < q; i++){
    int com, x, y;
    cin>>com>>x>>y;
    if(com)
      cout<<rsq(x,y)<<"\n";
    else
      add(x,y);
  }
}