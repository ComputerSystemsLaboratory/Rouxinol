#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count __gcd reverse etc.
#include <cstdlib>	// require abs exit atof atoi 
#include <cstdio>		// require scanf printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require fabs
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>		// require tolower, toupper
#include <fstream>	// require freopen
#include <ctime>		// require srand
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()
#define NIL -1

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

bool adj[105][105];
bool vis[105];
struct node{
	int ft;
	int rt;
};
node v[105];

int n;
int cnt;

void dfs (int cur )
{
	cnt++;
	vis[cur] = true;	
	v[cur].ft = cnt;
	for (int u = 1; u <= n; u++ ){
		if (!vis[u] && adj[cur][u] )
			dfs (u );
	} // end for
	cnt++;
	v[cur].rt = cnt;
}

int main()
{
	memset (adj, false, sizeof (adj ) );
	memset (vis, false, sizeof (vis ) );

	ios_base::sync_with_stdio(0);
	cin >> n;

	rep (i, n ) v[i].ft = NIL, v[i].rt = NIL;

	rep (i, n ){
		int v, k;
		cin >> v >> k;
		while (k-- ){
			int u; cin >> u;
			adj[v][u] = true;
		} // end rep
	} // end rep
	cnt = 0;
	while (true ){
		bool ok = true;
		for (int i = 1; i <= n; i++ ){
			if (v[i].ft == NIL ){
				dfs(i);
				ok = false;
				break;
			} // end if
		} // end for
		if (ok ) break;
	} // end while

	for (int i = 1; i <= n; i++ ){
		cout << i << ' ' << v[i].ft << ' ' << v[i].rt << endl;
	} // end for
	
	return 0;
}