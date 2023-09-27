#include<bits/stdc++.h>
#define INF 1e9
#define llINF 1e18
#define MOD 1000000007
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define BITLE(n) (1LL<<((ll)n))
#define SHIFT_LEFT(n) (1LL<<((ll)n))
#define SUBS(s,f,t) ((s).substr((f),(t)-(f)))
#define ALL(a) (a).begin(),(a).end()

template<typename T>
struct Bellman_ford{
  struct edge{
    int to;
    T cost;
  };
  int V;
  std::vector<std::vector<edge>>Edges;
  Bellman_ford(int V):V(V),Edges(V){}
  const T Inf = 1e9;
  void add_edge(int from,int to,T cost){
    Edges[from].push_back({to,cost});
  }
  std::pair<std::vector<T>,bool> execution(int s){
    std::queue<int>que;
    std::vector<T>dist(V,Inf);
    que.push(s);
    dist[s] = 0;
    for(int i = 0;i < V;i++){
      int loop = que.size();
      for(int j = 0;j < loop;j++){
	int now = que.front();
	que.pop();
	for(auto e:Edges[now]){
	  if(dist[e.to] > dist[now] + e.cost){
	    dist[e.to] = dist[now] + e.cost;
	    que.push(e.to);
	  }
	}
      }
      if(i == V-1 && !que.empty())return std::make_pair(dist, false);
    }
    return std::make_pair(dist, true);
  }
};


int main(){
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);
  ll v,e,r;std::cin>>v>>e>>r;
  Bellman_ford<int>bf(v);
  for(int i=0;i<e;i++){
    ll a,b,c;std::cin>>a>>b>>c;
    bf.add_edge(a,b,c);
  }
  std::pair<std::vector<int>,bool> ans = bf.execution(r);
  if(ans.second == false){
    std::cout<<"NEGATIVE CYCLE"<<std::endl;
    return 0;
  }
  for(auto e:ans.first){
    if(e == INF){
      std::cout<<"INF"<<std::endl;
    }else{
      std::cout<<e<<std::endl;
    }
  }

  return 0;
}

