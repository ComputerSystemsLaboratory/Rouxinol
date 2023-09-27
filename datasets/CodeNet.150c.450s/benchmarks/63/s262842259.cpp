#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <unordered_map>
#include <list>
#include <numeric>
#include <utility>
#include <iterator>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <ctime>
#include <cassert>

//#define INF 1000000000
#define LINF 9000000000000000000
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair

using namespace std;

/*
   cin.tie(0);
   ios::sync_with_stdio(false);
*/

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long>vll;
typedef pair<int,int> pi;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int ddx[8]={-1,-1,0,1,1,1,0,-1};
int ddy[8]={0,1,1,1,0,-1,-1,-1};
bool debug=false;

/*---------------------------------------------------*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;


using type = long long;
using P = pair<type, type>;

struct Edge{
    int to, cost;
    Edge(int a, long long b){
        to = a;
        cost = b;
    }
};

class Dijkstra{
private:
    const type _INF = 1000000000000000;
    int V; // 頂点数
    vector<type> d;
    vector<int> prev;
    vector<vector<Edge> > G;
public:
    Dijkstra(int v){
        V = v + 1;
        d.resize(V);
        G.resize(V);
        prev.resize(V);
    }

    void shortest_path(int s){
        priority_queue<P, vector<P>, greater<P>> que;
        d.assign(V, _INF);
        prev.assign(V, -1);
        d[s] = 0;
        que.push(P(0, s));
        while(que.size()){
            P p = que.top(); que.pop();
            int v = p.second;
            if(d[v] < p.first) continue;
            for(auto e : G[v]){
                if(d[v] + e.cost < d[e.to]){
                    d[e.to] = d[v] + e.cost;
                    prev[e.to] = v;
                    que.push(P(d[e.to], e.to));
                }
            }
        }
    }

    bool is_path(int t){
        return d[t] != _INF;
    }
  
    void add_path(int from, int to, type cost){
        G[from].push_back(Edge(to, cost));
    }

    type get_cost(int t){
        return d[t];
    }

    vector<int> get_path(int t){
        vector<int> path;
        for(; t != -1; t = prev[t])
            path.push_back(t);
        reverse(path.begin(), path.end());
        return path;
    }
};

int main(){
  int v,e,r;
  cin>>v>>e>>r;
  Dijkstra dij(v);
  rep(i,e){
    int s,t,d;
    cin>>s>>t>>d;
    dij.add_path(s,t,d);
  }
  dij.shortest_path(r);
  rep(i,v){
    if(dij.is_path(i))cout<<dij.get_cost(i)<<endl;
    else cout<<"INF"<<endl;
  }
  return 0;
}

