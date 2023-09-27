
//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <ctime>


using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }

//math
//-------------------------------------------
template<class T> inline T sqr(T x) { return x * x; }

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define EXISTch(s,c) ((((s).find_first_of(c)) != std::string::npos)? 1 : 0)//cがあれば1 if(1)
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  FOR(i,0,n)
#define loop(n) FOR(i,0,n)
#define rrep(i,a,b) for(int i=(a);i>=(b);--i)
//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = (int)1000000007;
const LL MOD = (LL)1000000007;//10^9+7
const LL INF2 = (LL)100000000000000000;//10^18

struct edge {
	int from, to, cost;
};

int V, E, s;

edge es[2010];

int d[1010];

bool find_negative_loop() {
	for (int i = 0; i < V; i++)d[i] = 0;

	for (int i = 0; i < V; i++) {
		for (int j = 0; j < E; j++) {
			edge e = es[j];

			if (d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;

				if (i == V - 1)return true;
			}
		}
	}

	return false;
}

void shortest_path(int s) {
	for (int i = 0; i < V; i++) d[i] = INF;
	d[s] = 0;

	while (true) {
		bool update = false;
		for (int i = 0; i < E; i++) {
			edge e = es[i];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}

		if (!update)break;
	}
}

bool shortest_path_with_nagativecheck(int s) {
	for (int i = 0; i < V; i++) d[i] = INF;
	d[s] = 0;


	for (int i = 0; i < V; i++) {
		for (int j = 0; j < E; j++) {
			edge e = es[j];

			if (d[e.from]!=INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;

				if (i == V - 1)return true;
			}
		}
	}

	return false;
}

int main() {
	cin >> V >> E >> s;

	for (int i = 0; i < E; i++) {
		edge e;
		cin >> e.from >> e.to >> e.cost;

		es[i] = e;
	}

	if (shortest_path_with_nagativecheck(s)) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	
	for (int i = 0; i < V; i++) {
		if (d[i] == INF) {
			cout << "INF" << endl;
		}
		else {
			cout << d[i] << endl;
		}
	}
	

	return 0;
}
