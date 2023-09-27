#include <bits/stdc++.h>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
using namespace std;
using ll = long long;
using d = double;

// constexpr int INF = 1000101010;

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> r(n);
  rep(i,m){
    int a,b;
    scanf("%d%d",&a,&b);
    r[a-1].push_back(b-1);
    r[b-1].push_back(a-1);
  }

  queue<int> q;
  vector<int> c(n,-1);
  vector<int> d(n,-1);

  d[0]=0;
  q.push(0);

  while(!q.empty()){
    int v = q.front();
    q.pop();
    for(int j: r[v]){
      if(d[j]!=-1) continue;
      d[j] = d[v]+1;
      c[j] = v;
      q.push(j);
    }
  }

  // rep(i,n){
  //   for(int j:r[i]){
  //     if(c[j]==-1) c[j]=c[i]+1;
  //   }
  // }
printf("%s\n","Yes");
  for(int i=1;i<n;++i){
    printf("%d\n",c[i]+1);
  }
  return 0;
}