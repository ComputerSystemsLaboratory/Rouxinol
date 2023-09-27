#include<cstdio>
#include<queue>
#include<utility>
#include<cstring>
#include<stack>
#include<algorithm>
#include<cmath>
#include<iostream>
#define MAX_N 100001
#define INF 2147483647
#define REP(i,n) for(int i=0;i<(int)(n);i++)
void init(int n);
int find(int n);
void unite(int x,int y);
bool same(int x, int y);
int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};
using namespace std;

struct edge{
  int from,to,cost;
};
typedef vector<vector<edge> > AdjList;
AdjList graph;
typedef pair<int , int> P;
bool comp(const edge& e1, const edge& e2){
  return e1.cost < e2.cost;
}
int E,V;
edge es[100001];
int kruskal(){
  sort(es,es+E,comp);
  init(V);
  int res = 0;
  for(int i=0;i<E;i++){
    edge e = es[i];
    if(!same(e.to,e.from)){
      unite(e.to,e.from);
      res += e.cost;
    }
  }
  return res;
}


int main()
{
  int co=0,dp[1001][1001];
  dp[0][0] = 0;
  dp[0][1] = 0;
  dp[1][0] = 0;
  string x,y;
  cin >> co;
  REP(i,co){
    cin >> x;
    cin >> y;
    REP(i,x.length()+1)REP(j,y.length()+1){
      if(i == 0 || j == 0)
        dp[i][j] = 0;
      else{
      if(x[i-1] == y[j-1]){
        dp[i][j] = dp[i-1][j-1]+1;
        }else{
        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
      }
      }
      
    }
    cout << dp[x.length()][y.length()] << endl;
  }
  return 0;
}

int par[MAX_N];
int ranks[MAX_N];

//n要素で初期化
void init(int n){
  REP(i,n){
    par[i] = i;
    ranks[i] = 0;
  }

}

//木の根を求める
int find(int x){
  if(par[x] == x){
    return x;
  }else{
    return par[x] = find(par[x]);
  }
}

void unite(int x,int y){
  x = find(x);
  y = find(y);
  if(x == y) return ;
  if(ranks[x] < ranks[y]){
    par[x] = y;
  }else{
    par[y] = x;
    if(ranks[x] == ranks[y]) ranks[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}


