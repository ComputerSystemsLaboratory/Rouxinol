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
std::vector<int> out;
int N;
int dfs(int u, int count) {
	if (flag[u] == 1) return -1;
	flag[u] = 1;
	
	in[u] = count;
	for (int i = 0; i < N; ++i) {
		if (flag[i] == 0 && G[u][i] == 1) {
			count = dfs(i, count + 1);
		}
	}
	out[u] = count + 1;
	return count + 1;
}

int main(int argc, char const *argv[]) {
	
	cin >> N;

	for (int i = 0; i < N; ++i) {
		G.push_back(vector<int>());
		flag.push_back(0);
		in.push_back(0);
		out.push_back(0);
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

	int count = 1;
	for(int i = 0; i < N; i++) {
		int r = dfs(i, count);
		if (r != -1) {
			count = r + 1;
		}
	}

	for (int i = 0; i < N; ++i) {
		cout << i + 1 << " " << in[i] << " " << out[i] << endl;
	}

	return 0;
}