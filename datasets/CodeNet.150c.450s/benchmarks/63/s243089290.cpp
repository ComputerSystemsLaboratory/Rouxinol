#include <bits/stdc++.h>
#define REP(i,n) for (long long i=0;i<(n);i++)
using namespace std;
template<typename V,typename Weight>
class DijekstraFast {
private:
	typedef pair<Weight,V> P;
	struct RadixHeap{
		V last,sz;
		vector<P> bucket[64];
		RadixHeap() : last(0), sz(0){}
		int inline bsr(V x) {
			return x == 0 ? 0 : (31 - __builtin_clz(x^last));
		}

		void inline push(Weight d,V ver){
			sz++, bucket[bsr(d)].emplace_back(d,ver);
		}

		P pop(bool flg = true){
			if(bucket[0].empty()){
				int idx = 1;
				while(bucket[idx].empty()) idx++;
				last = min_element(bucket[idx].begin(), bucket[idx].end())->first;
				for(P val : bucket[idx]) bucket[bsr(val.first)].push_back(val);
				bucket[idx].clear();
			}
			P res = bucket[0].back();
			if(flg) sz--, bucket[0].pop_back();
			return res;
		}

		P inline top(){ return pop(false); }
		bool inline empty(){ return !sz; }
	};
	vector<vector<pair<V,Weight>>> E;
	V const sz;
public:
	Weight const inf = numeric_limits<Weight>::max();
	vector<Weight> D;
	DijekstraFast(V v) :
		E(v),sz(v),D(v,inf) {}

	void inline addEdgeDirected(V from,V to,Weight dis){
		E[from].emplace_back(make_pair(to,dis));
	}
	void inline addEdgeUndirected(V from,V to,Weight dis){
		E[from].emplace_back(make_pair(to,dis));
		E[to].emplace_back(make_pair(from,dis));
	}

	V size() {return sz;}
	Weight & operator[] (V n) { if (0 <= n && n < sz) return D[n];} 

	void dijekstra(V start){
		RadixHeap que;
		D[start] = 0;
		que.push(0,start);
		while(!que.empty()){
			P cur = que.pop();
			Weight d = cur.first;
			V v = cur.second;
			if (D[v] < d) continue; //既により最適が見つかっている
			for(V i = 0;i < E[v].size();i++){
				V next = E[v][i].first;
				Weight newCost = d + E[v][i].second;
				if (D[next] > newCost) {
					D[next] = newCost;
					que.push(newCost,next);
				}
			}
		}
	}
};


/*
template<typename V,typename Weight>
class Dijekstra { // 普通のダイクストラ(重みが小数も可)
private:
	typedef pair<Weight,V> P;
	vector<vector<pair<V,Weight>>> E;
	V const sz;
public:
	Weight const inf = numeric_limits<Weight>::max();
	vector<Weight> D;
	Dijekstra(V v) :
		E(v),sz(v),D(v,inf) {}

	void inline addEdgeDirected(V from,V to,Weight dis){
		E[from].emplace_back(make_pair(to,dis));
	}
	void inline addEdgeUndirected(V from,V to,Weight dis){
		E[from].emplace_back(make_pair(to,dis));
		E[to].emplace_back(make_pair(from,dis));
	}

	V size() {return sz;}
	Weight & operator[] (V n) { if (0 <= n && n < sz) return D[n];} 

	void dijekstra(V start){
		priority_queue<P,vector<P>,greater<P>> que;
		D[start] = 0;
		que.push(make_pair(0,start));
		while(!que.empty()){
			P cur = que.top();que.pop();
			Weight d = cur.first;
			V v = cur.second;
			if (D[v] < d) continue; //既により最適が見つかっている
			for(V i = 0;i < E[v].size();i++){
				V next = E[v][i].first;
				Weight newCost = d + E[v][i].second;
				if (D[next] > newCost) {
					D[next] = newCost;
					que.push(make_pair(newCost,next));
				}
			}
		}
	}
};

template<typename V,typename Weight>
class DijekstraTrace {
private:
	struct edge {
		Weight dist;V node;V prev;
		bool operator<(edge const& a) const {
			return dist < a.dist;
		}
		bool operator>(edge const& a) const {
			return dist > a.dist;
		}
	};
	vector<V> trace;
	vector<vector<pair<V,Weight>>> E;
	V sz;
	V start;
public:
	Weight inf = numeric_limits<Weight>::max();
	vector<Weight> D;
	DijekstraTrace(V v) :
		E(v),sz(v),D(v,inf),trace(v,numeric_limits<V>::max()) {}

	void addEdgeDirected(V from,V to,Weight dis){
		E[from].push_back(make_pair(to,dis));
	}
	void addEdgeUndirected(V from,V to,Weight dis){
		E[from].push_back(make_pair(to,dis));
		E[to].push_back(make_pair(from,dis));
	}

	V size() {return sz;}
	Weight & operator[] (V n) { if (0 <= n && n < sz) return D[n];} 

	void dijekstra(V st){
		start = st;
		priority_queue<edge,vector<edge>,greater<edge>> que;
		D[start] = 0;
		trace[start] = start;
		que.push(edge{0,start,start});
		Weight d;V v,prev;
		while(!que.empty()){
			edge cur = que.top();que.pop();
			d = cur.dist;v = cur.node;prev = cur.prev;
			if (D[v] < d) continue; //既により最適が見つかっている
			D[v] = d;trace[v] = prev;
			for(pair<V,Weight> e : E[v]){
				if (D[e.first] <= d + e.second) continue;
				que.push(edge{d+e.second,e.first,v});
			}
		}
	}

	vector<V> show_trace(V goal){ // goalからの最短路
		vector<V> ret;
		for (V node = goal;node != start;node = trace[node]) ret.push_back(node);
		ret.push_back(start);
		return ret;
	}
};
*/
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);
	long V,E,R;
	long s,t,d;
	cin >> V >> E >> R;
	DijekstraFast<long,long> dij(V);
	REP(i,E){
		cin >> s >> t >> d;
		dij.addEdgeDirected(s,t,d);
	}
	dij.dijekstra(R);
	REP(i,V) {
		if (dij[i] == dij.inf) cout << "INF" << endl;
		else cout << dij[i] << endl;
	}

	return 0;
}
