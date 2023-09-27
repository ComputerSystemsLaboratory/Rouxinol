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
	int N, Q;
	cin >> N >> Q;
	
	unionf un(N);
	
	REP(i, Q) {
		int a, x, y;
		cin >> a >> x >> y;
		
		if ( a == 0 ) {
			un.unite(x, y);
		} else {
			cout << (un.issame(x, y) ? 1 : 0) << endl;
		}
	}
	
}