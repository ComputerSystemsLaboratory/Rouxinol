#include <bits/stdc++.h>
#define REP(i,n) for (long i=0;i<(n);i++)
#define FOR(i,a,b) for (long i=(a);i<(b);i++)
#define RREP(i,n) for(long i=n;i>=0;i--)
#define RFOR(i,a,b) for(long i=(a);i>(b);i--)
#define dump1d_arr(array) REP(i,array.size()) cerr << #array << "[" << (i) << "] ==> " << (array[i]) << endl;
#define dump2d_arr(array) REP(i,array.size()) REP(j,array[i].size()) cerr << #array << "[" << (i) << "]" << "[" << (j) << "] ==> " << (array[i][j]) << endl;
#define dump(x)  cerr << #x << " => " << (x) << endl;

using namespace std;
struct edge {long S,G,W;};

class Bellman {
private:
	vector<edge> E;
	vector<long> dist;
	vector<long> trace;
	size_t V;
public:
	Bellman() : V(0),E(0) {} 
	Bellman(size_t v) :
		V(v),E(0),dist(v,2147483647),trace(v,2147483647) {}

	size_t size() {return V;}

	void add_edge_directed(long start,long goal,long dis){
		E.push_back(edge {start,goal,dis});
	}

	void add_edge_undirected(long start,long goal,long dis){
		E.push_back(edge {start,goal,dis});
		E.push_back(edge {goal,start,dis});
	}

	bool bellman_ford(long start){ // 負の閉路->false
		bool update = true;
		long roop = 0;
		dist[start] = 0;

		while (update) {
			if (++roop > V) return false;
			update = false;

			REP(i,E.size()) {	// 辺の始点
				edge* e = &E[i];
				if (dist[e->S] == 2147483647) continue; //まだ候補すらない頂点

				if (dist[e->G] > dist[e->S] + (e->W)){
					dist[e->G] = dist[e->S] + (e->W);
					update = true;
				}

				trace[e->G] = e->S;
			}
		}
		return true;
	}

	vector<long> bellman_ford_dic(long start,long goal){ // 負の閉路->false
		vector<long> trace_result(0);
		bool update = true;
		long roop = 0;
		dist[goal] = 0; //逆から辿る。

		while (update) {
			if (++roop > V) return trace_result;
			update = false;

			REP(i,E.size()) {	// 辺の始点
				edge* e = &E[i];
				if (dist[e->S] == 2147483647) continue; //まだ候補すらない頂点

				if (dist[e->G] > dist[e->S] + (e->W)){
					dist[e->G] = dist[e->S] + (e->W);
					update = true;
				}

				else {
					if (dist[e->S] + e->W == dist[e->G] && trace[e->G] > (e->S)){
						trace[e->G] = e->S;
						update = true;
					}
				}
				trace[e->G] = e->S;	
			}
		}
		
		for (long node = start;node != goal;node = trace[node]){
			trace_result.push_back(node);
		}
		trace_result.push_back(goal);
		return trace_result; //先頭がstart,末尾がgoal
	}

	vector<long> result(void){
		return dist; // 非連結なら 2147483647 が入っている。
	}

	long result_query(long goal){
		return dist[goal];
	}

	vector<long> trace_route(long start,long goal){
		vector<long> trace_result;
		for (long node = goal;node != start;node = trace[node]){
			trace_result.push_back(node);
		}
		trace_result.push_back(start);
		return trace_result; // 先頭がgoal,末尾がstart
	}
};

int main(void){
	long V,E,R;
	long s,t,d;
	cin >> V >> E >> R;
	Bellman bl(V);
	REP(i,E){
		cin >> s >> t >> d;
		bl.add_edge_directed(s,t,d);
	}
	if (!bl.bellman_ford(R)) {
		cout << "NEGATIVE CYCLE" << endl;
		exit(0);
	}

	vector<long> ans = bl.result();

	REP(i,V){
		if (ans[i] == 2147483647) cout << "INF" << endl;
		else cout << ans[i] << endl;
	}
	return 0;
}


