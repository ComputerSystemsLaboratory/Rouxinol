#include <bits/stdc++.h>

using namespace std;
using ll =long long;

static const int inf = (1<<21);
static const int white = 0;
static const int gray =  1;
static const int black = 2;
#define SORT(a) sort((a).begin(),(a).end())
#define rSORT(a) reverse((a).begin(),(a).end())
#define For(i, a, b)    for(int i = (a) ; i < (b) ; ++i)
#define rep(i, n)       For(i, 0, n)
#define debug(x)  cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//Write From this Line

int n, M[110][110];

void dijkstra(){ 
	int minv;
	int d[110], color[110];

	for (int i = 0; i < n; i++) {
		d[i] = inf;
		color[i] = white;
	}

	d[0] = 0;
	color[0] = gray;
	while(1) {
		minv = inf;
		int u = -1;
		for (int i = 0; i < n; i++){
			if (minv > d[i] && color[i] != black){
				u = i;
				minv = d[i];
			}
		}
		if (u == -1) break;
		color[u] = black;
		for (int v = 0; v < n; v++){
			if (color[v] != black && M[u][v] != inf){
				chmin(d[v],d[u]+M[u][v]);
				color[v] = gray;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i << " " << (d[i] ==inf ? -1 : d[i]) << endl;
	}
}

int main()
{
	cin >> n;
	rep(i,110){
		rep(j,110){
			M[i][j] = inf;
		}
	}
	rep(i,n){
		int u, k;
		cin >> u >> k;
		rep(j,k){
			int a, b;
			cin >> a >> b;
			M[u][a] = b;
		}
	}
	dijkstra();
	return 0;
}

