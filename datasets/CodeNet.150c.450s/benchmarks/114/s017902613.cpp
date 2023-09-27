#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

#define REP(var, count) for(int var=0; var<count; var++)

struct unionf {
	
	vector<int> data;
	
	unionf(int n) {
		REP(i, n+1) { data.push_back(i); }
	}
	
	int root(int a) {
		if(data[a] == a) { return a; }
		return (data[a] = root(data[a]));
	}
	
	bool issame(int a, int b) {
		return root(a) == root(b);
	}
	
	void unite(int a, int b) {
		data[root(a)] = root(b);
	}

};

int main(void) {
	int N;
	cin >> N;
	
	vector<pair<int, pair<int, int> > > edge;
	
	REP(x, N) {
		REP(y, N) {
			int c;
			cin >> c;
			if ( x <= y ) { continue; }
			if ( c == -1 ) { continue; }
			edge.push_back( make_pair(c, make_pair(x,y)) );
		}
	}
	
	sort(edge.begin(), edge.end());
	
	unionf uf(N);
	
	int cnt = 0;
	int ret = 0;
	
	REP(i, edge.size() ) {
		
		pair<int, int> sd = edge[i].second;
		if ( ! uf.issame( sd.first, sd.second ) ) {
			cnt ++;
			ret += edge[i].first;
			uf.unite(sd.first, sd.second);
			//cout << "joint " << sd.first << " " << sd.second << " -> " << edge[i].first << endl;
		}
		
		if ( cnt == N-1 ) { break; }
	}
	
	cout << ret << endl;
}