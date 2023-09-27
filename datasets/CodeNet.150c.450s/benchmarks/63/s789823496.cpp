#include <bits/stdc++.h> 

using namespace std;

#define fcout(d) cout << fixed << setprecision(d)
#define rep(i,n) for(int (i) = 0; (i) < (n); ++(i))
#define rep1(i,n) for(int (i) = 1; (i) <= (n); ++(i))
#define repU(i,bottom,ceiling) for(auto (i) = (bottom); (i) <= (ceiling); ++(i))
#define repD(i,ceiling,bottom) for(auto (i) = (ceiling); (i) >= (bottom); --(i))
#define l_bnd lower_bound
#define u_bnd upper_bound
#define puf push_front
#define pub push_back
#define pof pop_front
#define pob pop_back
#define mkp make_pair
#define mkt make_tuple
#define fir first
#define sec second
#define divceil(n,d) ((n)/(d) + ((n)%(d) > 0))
#define parity(a,b) (((a) & 1LL)^((b) & 1LL)^1LL)

typedef long long ll;
typedef unsigned long long ull;
typedef double db;

const pair<int,int> DIR[] = { {1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1} };
const int INF_32 = -1 + (1 << 30);
const ll INF_64 = -1 + (1LL << 62);
const int MOD = (int)1e9 + 7;

ull next_subset(ull subset){
	ull tem = subset + (subset & -subset);
	ull btm = (~tem & subset) / (subset & -subset) >> 1;
	return btm | tem;
}

int V,E,r;
vector<pair<int,int> > adj[100000];
ll dist[100000];

void solve(){
	
	fill(dist,dist + V,INF_64);
	dist[r] = 0;
	
	queue<int> que;
	que.push(r);
	
	while(!que.empty()){
		int v = que.front();
		que.pop();
		rep(i,adj[v].size()){
			pair<int,int> p = adj[v][i];
			if(dist[p.fir] < dist[v] + p.sec) continue;
			que.push(p.fir);
			dist[p.fir] = dist[v] + p.sec;
		}
	}
	
	rep(i,V){
		if(dist[i] == INF_64) cout<<"INF\n";
		else cout<<dist[i]<<endl;
	}
	
	return;
}

void input(){
	
	cin>>V>>E>>r;
	rep(i,E){
		int s,t,d;
		cin>>s>>t>>d;
		adj[s].pub({t,d});
	}
	
	return;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	input();
	solve();
	
	return 0;
}



