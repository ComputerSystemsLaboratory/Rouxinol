#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
inline int in(){ int x; scanf("%d",&x); return x;}

int res;

void dfs(int n, int s, vector<int> used){
  int x,i;

//  cout << n << " " << s << endl;
//  rep(i,used.size()) cout << used[i] << " "; cout << endl;
  if(n == 0 && s == 0) res++;
  rep(x,10){
    bool f = false;
    rep(i,used.size()) if(x == used[i]) f = true;
    if(f) continue;
    if(0 <= s-x && 0 <= n-1){
      used.push_back(x);
      dfs(n-1,s-x,used);
    }
  }
}

int main(){
  int i,j,k;
  int n,s;

  while(scanf("%d %d",&n,&s)){
    if(n == 0 && s == 0) break;
    vector<int> used;

    res = 0;
    dfs(n,s,used);
    printf("%d\n",res);
  }

  return 0;
}