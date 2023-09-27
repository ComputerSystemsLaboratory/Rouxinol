#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <cstring>

using namespace std;
// ascending order
#define vsort(v) sort(v.begin(), v.end())
// descending order
#define vsort_r(v) sort(v.begin(), v.end(), greater<int>())
#define vunique(v) v.erase(unique(v.begin(), v.end()), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i, a, b) for(int i = (int)a; i < (int)b; i++)
#define repm(i, a, b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1e9;

#define MAX_E 100000
#define MAX_V 100000

int V, E, r;

struct edge {
	int from, to, cost;
};
int d[MAX_V];

edge es[MAX_E];

void shortest_path(int s) {
	rep(i, 0, V) d[i] = INF;
	d[s] = 0;
	while(true) {
		bool update = false;
		rep(i, 0, E) {
			edge e = es[i];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if(!update) break;
	}
}

bool find_negative_loop(int s) {
	//memset(d, 0, sizeof(d));
	fill(d, d + V, INF);
	d[s] = 0;
	rep(i, 0, V) {
		rep(j, 0, E) {
			edge e = es[j];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				if(i == V - 1) return true;
			}
		}
	}
	return false;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  cin >> V >> E >> r;
  rep(i, 0, E) {
    int s, t, d;
    cin >> s >> t >> d;
    edge e = {s, t, d};
    es[i] = e;
  }

  if(find_negative_loop(r)) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  shortest_path(r);
  rep(i, 0, V) {
    if(d[i] == INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
}


