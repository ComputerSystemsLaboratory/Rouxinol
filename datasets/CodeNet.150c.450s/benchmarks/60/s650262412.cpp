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
int main(int argc, char const *argv[]) {
	int N;
	cin >> N;
	std::vector<vector<int> > G(N, vector<int>(N));
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
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << G[i][j];
			if (j != N - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}