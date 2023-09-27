#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

#define rep(i,cc,n) for(int i=cc;i<n;++i)
#define lrep(i,cc,n) for(long long i=cc;i<n;++i)
#define sqrep(i,cc,n) for(long long i=cc;i*i<=n;++i)
#define rrep(i,cc,n) for(long i=cc;i>n;--i)
#define pii pair<int, int>
#define pll pair<long long, long long>
 
using ll = long long;

const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};
const double PI = 3.1415926535;
const ll inf = 1001001001;
const ll e9  = 1000000000;
const ll mod = 1000000007;

int n, m;
vector<vector<int>> graph;

void bfs(){
   vector<int>dist(n, -1);
   vector<int>seen(n, -1);
   queue<int>que;
   que.push(0);
   dist[0]=0;
   while(!que.empty()){
      int p = que.front();
      que.pop();
      for(auto next:graph[p]){
         if(dist[next]!=-1)continue;
         dist[next] = dist[p]+1;
         seen[next] = p;
         que.push(next);
      }
   }
   bool flag = true;
   rep(i, 1, n){
      if(seen[i]==-1)flag = false;
   }
   if(flag){
      cout << "Yes" << endl; 
      rep(i, 1, n)cout << seen[i]+1 << endl;
   }else cout << "No" << endl; 
}
int main(){
   cin >> n >> m;
   graph.assign(n, vector<int>());
   rep(i, 0, m){
      int a, b;
      cin >> a >> b;
      a--,b--;
      graph[a].push_back(b);
      graph[b].push_back(a);
   }
   bfs();
}