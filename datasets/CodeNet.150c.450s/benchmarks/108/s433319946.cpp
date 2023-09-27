#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

std::vector<vector<int> > G;
std::vector<int> flag;
std::vector<int> in;
int N;
typedef pii P;

int main(int argc, char const *argv[]) {
	
	cin >> N;

	for (int i = 0; i < N; ++i) {
		G.push_back(vector<int>());
		flag.push_back(0);
		in.push_back(100000000);
		for (int j = 0; j < N; ++j) {
			G[i].push_back(0);
		}
	}

	for (int i = 0; i < N; ++i) {
		int u, k;
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; ++j) {
			int v;
			cin >> v;
			v--;
			G[u][v] = 1;
		}
	}
	queue<P> q;
	q.push(mp(0, 0));
	while(!q.empty()) {
		P u = q.front(); q.pop();
		int dist = u.second;
		if (dist > in[u.first]) continue;
		in[u.first] = dist;
		flag[u.first] = 1;
		for (int i = 0; i < N; ++i) {
			if (flag[i] == 0 && G[u.first][i] == 1) {
				q.push(mp(i, dist + 1));
			}
		}
	}

	for (int i = 0; i < N; ++i) {
		if (in[i] == 100000000) {
			in[i] = -1;
		}
		cout << i + 1 << " " << in[i] << endl;
	}

	return 0;
}