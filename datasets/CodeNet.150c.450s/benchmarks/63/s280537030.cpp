#include<iostream>
#include <vector>
#include<list>
#include<algorithm>
#include<map>
#include<functional>
#include<stack>
#include<queue>

namespace graph{
	using namespace std;
	typedef long long LL;
	typedef vector<LL> VLL;
	typedef pair<LL, int> edge;
	typedef vector<list<edge>> ADJ;
#define mp(_x,_y) make_pair(_x,_y)
#define cost(_v) _v.first
#define to(_v) _v.second

	class UnionFind{
	public:
		//n???????´???°
		UnionFind(int n) :par(n), rank(n){
			for (int i = 0; i < n; ++i)
				par[i] = i;
		}

		//x??¨y????±??????????????????????
		void unite(int x, int y){
			x = find(x);
			y = find(y);
			if (x == y)return;
			if (rank[x] < rank[y])
				par[x] = y;
			else{
				par[y] = x;
				if (rank[x] == rank[y])rank[x]++;
			}
		}

		bool same(int x, int y){
			return find(x) == find(y);
		}



	private:
		//???
		vector<int> par;

		//????????±???
		vector<int> rank;

		//??¨??????????±???????
		int find(int x){
			if (par[x] == x)
				return x;
			else
				return par[x] = find(par[x]);
		}
	};

	VLL dijkstra(int s, ADJ& adj){
		int n = (int)adj.size();
		VLL res(n, -1);
		priority_queue<edge, vector<edge>, greater<edge>> que;
		que.push(mp(0ll, s));
		while (que.empty() == false){
			auto tmp = que.top(); que.pop();
			auto c = cost(tmp);
			auto v = to(tmp);
			if (res[v] >= 0)continue;
			res[v] = c;
			for (auto& i : adj[v]){
				auto d = cost(i);
				auto u = to(i);
				if (res[u] >= 0)continue;
				que.push(mp(c + d, u));
			}
		}
		return res;
	}
}


#define input_init stringstream ss; string strtoken, token; istringstream is
#define input_line  getline(cin, strtoken);is.str(strtoken);is.clear(istringstream::goodbit)
#define input_token(num) ss.str(""); ss.clear(stringstream::goodbit); getline(is, token, ','); ss << token; ss >> num
#define mp(_x,_y) make_pair(_x,_y)
using namespace std;
int main(void){
	int V, E,r;
	cin >> V >> E>>r;
	graph::ADJ adj(V);
	for (int i = 0; i < E; i++){
		int s, t;
		graph::LL d;
		cin >> s >> t >> d;
		adj[s].push_back(mp(d, t));
	}
	auto res = graph::dijkstra(r, adj);
	for (auto& i : res){
		if (i >= 0)cout << i << endl;
		else cout << "INF" << endl;
	}
	return(0);
}