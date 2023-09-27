#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;
// union - find tree !!!!!!!!!!!!!!!!!!!!!!!!!
vector<int> par; //oya
vector<int> rnk; //ki no hu ka sa
// n要素で初期化
void init(int n){
    par.resize(n);rnk.resize(n);
    FOR(i, 0, n){par[i] = i;rnk[i] = 0;}
}
//木の根を求める
int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
}
//xとyの属する集合を併合
void unite(int x, int y){
    x = find(x);y = find(y);
    if(x == y) return;
    if(rnk[x] < rnk[y])par[x] = y;
    else {
      par[y] = x;
      if(rnk[x] == rnk[y]) rnk[x]++;
    }
    return;
}
bool isSame(int x, int y){return find(x) == find(y);}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  priority_queue<PP, vector<PP>, greater<PP> > que;
  int n;
  cin >> n;
  init(n+1);
  FOR(i,1,n+1){
    FOR(j,1,n+1){
      int cost;
      cin >> cost;
      if(cost == -1) cost = 1e9;
      que.push(PP(cost, P(i, j)));
    }
  }
  int ans = 0;
  while(!que.empty()){
    PP pp = que.top();
    que.pop();
    P p = pp.second;
    if(!isSame(p.first, p.second)){
      ans += pp.first;
      unite(p.first, p.second);
    }
  }
  cout << ans << endl;
}
