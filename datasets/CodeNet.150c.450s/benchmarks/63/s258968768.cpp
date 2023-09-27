#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <tuple>
#include <cassert>
#include <exception>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<P> vp;
#define rep(i,a,n) for(ll i = (a);i < (n);i++)
#define per(i,a,n) for(ll i = (a);i > (n);i--)
#define lep(i,a,n) for(ll i = (a);i <= (n);i++)
#define pel(i,a,n) for(ll i = (a);i >= (n);i--)
#define clr(a,b) memset((a),(b),sizeof(a))
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz size()
#define print(X) cout << (X) << endl
#define fprint(NUM,X) cout << fixed << setprecision(NUM) << (X) << endl
#define fprints(NUM,X,Y) cout << fixed << setprecision(NUM) << (X) << " " << (Y) << endl
const ll INF = 1e+9+7;
ll n,m,l;
string s,t;
ll d[200010],dp[1010][1010];
double w[1000],v[1000];
double box[200010];

class Dijkstra{
private:
  struct edge{int to,cost;};
  typedef pair<int,int> P;
  vector<edge> graph[100000];
  int ans[100000];

public:
  int vertces,edges;
  int start;
  Dijkstra(){
    cin >> vertces >> edges >> start;
    for(int i = 0;i < edges;i++){
      int a,b,c;
      cin >> a >> b >> c;
      // a--;b--;
      graph[a].push_back(edge{b,c});
      //graph[b].push_back(edge{a,c});
    }
  }

  void goal(int goal){
    if(ans[goal] == 1e+9+7)puts("INF");
    else printf("%d\n",ans[goal]);
  }

  void process(int s = 0){
    s = start;
    priority_queue<P,vector<P>,greater<P> > que;
    fill(ans,ans+vertces,1e+9+7);
    ans[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
      P p = que.top();que.pop();
      int v = p.second;
      if(ans[v] < p.first)continue;

      rep(i,0,graph[v].sz){
        edge e = graph[v][i];
        if(ans[e.to] > ans[v]+e.cost){
          ans[e.to] = ans[v] + e.cost;
          que.push(P(ans[e.to],e.to));
        }
      }
    }
  }
};

int main(){
  Dijkstra dij;
  dij.process();
  for(int i = 0;i < dij.vertces;i++)dij.goal(i);
  return 0;
}
