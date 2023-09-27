#include <bits/stdc++.h>
#define REP(i,n) for (long i=0;i<(n);i++)
#define FOR(i,a,b) for (long i=(a);i<(b);i++)
#define RREP(i,n) for(long i=n;i>=0;i--)
#define RFOR(i,a,b) for(long i=(a);i>(b);i--)
#define dump1d_arr(array) REP(i,array.size()) cerr << #array << "[" << (i) << "] ==> " << (array[i]) << endl;
#define dump2d_arr(array) REP(i,array.size()) REP(j,array[i].size()) cerr << #array << "[" << (i) << "]" << "[" << (j) << "] ==> " << (array[i][j]) << endl;
#define dump(x)  cerr << #x << " => " << (x) << endl;

using namespace std;

typedef pair<long,long> pr;
struct ver {long di,node,prev;};
struct Order {
	bool operator() (ver const& a,ver const& b) const {
		return a.di > b.di || ((a.di == b.di) && (a.node > b.node));
	}
};
typedef priority_queue<ver,vector<ver>,Order> pq;

class Dijekstra {
private:
	vector<vector<pr>> E;
	vector<long> dist;
	vector<long> trace;
	size_t V;
public:
	Dijekstra() : V(0) { }
	Dijekstra(size_t v) :
		V(v),E(v,vector<pr>(0)),dist(v,2147483647),trace(v,2147483647) {}

	size_t size() { return V;}

	void add_edge_directed(long from,long to,long dis){
		E[from].push_back(pr(to,dis));
	}

	void add_edge_undirected(long from,long to,long dis){
		E[from].push_back(pr(to,dis));
		E[to].push_back(pr(from,dis));
	}	

	void dijekstra(long start){
		pq que;
		dist[start] = 0;
		trace[start] = start;
		que.push(ver{0,start,start});

		while(! que.empty()){
			ver next = que.top();
			que.pop();
			long next_v = next.node;
			if (dist[next_v] < next.di) continue; //既により最適が見つかっている
			dist[next_v] = next.di;
			trace[next_v] = next.prev;
			
			REP(i,E[next_v].size()){
				pr e = E[next_v][i];
				if (dist[e.first] == 2147483647) que.push(ver{next.di+e.second,e.first,next_v});
			}
		}
	}

	long dijekstra_fast(long start,long goal){
		pq que;
		dist[start] = 0;
		trace[start] = start;
		que.push(ver{0,start,start});

		while(! que.empty()){
			ver next = que.top();
			que.pop();
			long next_v = next.node;
			if (dist[next_v] < next.di) continue; //既により最適が見つかっている
			dist[next_v] = next.di;
			trace[next_v] = next.prev;
			if (next_v == goal) break;	//goalが求まったら即終了
			
			REP(i,E[next_v].size()){
				pr e = E[next_v][i];
				if (dist[e.first] == 2147483647) que.push(ver{next.di+e.second,e.first,next_v});
			}
		}

		if (dist[goal] == 2147483647) return 1;
		else return dist[goal];
	}

	vector<long> all_result(void){
		return dist;	// 非連結なら 2147483647 が入っている。
	}

	vector<long> show_trace(long start,long goal){
		vector<long> trace_result;
		for (long node = goal;node != start;node = trace[node]){
			trace_result.push_back(node);
		}
		trace_result.push_back(start);

		return trace_result; // 配列の先頭がgoal,末尾がstart
	}
};

int main(void){
	long V,E,R;
	long s,t,d;
	cin >> V >> E >> R;
	Dijekstra dij(V);

	REP(i,E){
		cin >> s >> t >> d;
		dij.add_edge_directed(s,t,d);
	}

	dij.dijekstra(R);
	vector<long> ans;
	ans = dij.all_result();
	REP(i,V) {
		if (ans[i] == 2147483647) cout << "INF" << endl;
		else cout << ans[i] << endl;
	}
		
	return 0;
}


