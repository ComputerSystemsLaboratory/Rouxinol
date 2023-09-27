//#define LOCAL 
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <ctype.h>
#include <sstream>
#include <iomanip>
#include <fstream>   
#include <cassert>
#include <climits>

#define min(a,b) ((a)<(b) ? (a):(b))
#define max(a,b) ((a)>(b) ? (a):(b))
#define abs(a) ((a)>0 ? (a):-(a)) 

#define pb push_back
#define mp make_pair
#define st first
#define nd second

//#define ALL(x) x.begin(), x.end() 
//#define INS(x) inserter(x, x.begin())
#define REP(i,n) for(int i = 0; i < (n); i++)
#define MST(a,b) memset(a,b,sizeof(a))

const int INF = 0x3f3f3f3f;
const int N = 1010;
using namespace std;
typedef long long LL;

#define mp make_pair
#define st first
#define nd second
typedef pair<int, int> PII;

int h, w, n;
char g[N][N]; 

void read() {
	scanf("%d%d%d", &h, &w, &n);
	MST(g, 'X');
	for (int i = 1; i <= h; i++) {
		getchar();
		for (int j = 1; j <= w; j++) 
			g[i][j] = getchar();
	}
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= w; j++) 
//			cout << g[i][j];
//		cout << endl;
//	}
}

int setp(int x, int y) {
	return (x-1)*w+y-1;
}

void getp(int xy, int& x, int& y) {
	x = xy/w+1;
	y = xy%w+1;
}

int pos[10], d[N][N];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int bfs(int s) {
	MST(d, INF);
	queue<int> q;
	int sx, sy;
	getp(pos[s], sx, sy);
	q.push(pos[s]);
	d[sx][sy] = 0;
	while (q.size()) {
		int t = q.front(); q.pop();
		int tx, ty;
		getp(t, tx, ty);
//		cout << tx << " " << ty << endl;
		if (t == pos[s+1]) return d[tx][ty];
		
		for (int k = 0; k < 4; k++) {
			int txx = tx+dx[k], tyy = ty+dy[k];
			if (g[txx][tyy] == 'X') continue;
			int tt = setp(txx, tyy); 
			if (d[txx][tyy] == INF) {
				d[txx][tyy] = d[tx][ty] + 1;
				q.push(tt);
//				cout << "\t" << txx << " " << tyy << endl;
			}
		}
	}
}

int solve() {
	for (int i = 1; i <= h; i++)
		for (int j = 1; j <= w; j++) {
			if (g[i][j] == 'S') pos[0] = setp(i, j);
			if (isdigit(g[i][j])) pos[g[i][j]-'0'] = setp(i, j);
		}
	
//	for (int i = 0; i <= n; i++) {
//		int x, y;
//		getp(pos[i], x, y);
//		cout << pos[i] << " " << x << " " << y << endl;
//	}
	
	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += bfs(i);
	return ans;
}

int main() {
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	read();
	cout << solve() << endl;
	return 0;
}