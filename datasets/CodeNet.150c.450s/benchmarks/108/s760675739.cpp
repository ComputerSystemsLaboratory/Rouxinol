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

struct node{
	int id;
	int d;
};

node v[105];
bool vis[105];
vector<int> g[105];

void bfs (int u )
{
	vis[u] = true;
	v[u].d = 0;
	queue<node> que;
	que.push (v[u] );
	
	while (!que.empty() ){
		node cur = que.front(); que.pop();
		int id = cur.id;
		int d  = cur.d;
		rep (j, g[id].size() ){
			int next = g[id][j];
			if (!vis[next] ){
				vis[next] = true;
				v[next].d = d + 1;
				que.push (v[next] );
			} // end if
		} // end rep
	} // end while				
}

int main()
{
	memset (vis, false, sizeof (vis ) );
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	rep (i, n+1 ) g[i].clear();
	rep (i, n+1 ) v[i].id = i, v[i].d = NIL;

	rep (i, n ){
		int id; cin >> id;
		int k; cin >> k;
		while (k-- ){
			int v; cin >> v;
			g[id].push_back (v );
		} // end while
	} // end rep

	bfs (1 );

	for (int i = 1; i <= n; i++ ){
		cout << v[i].id << ' ' << v[i].d << endl;
	} // end for
		
	return 0;
}