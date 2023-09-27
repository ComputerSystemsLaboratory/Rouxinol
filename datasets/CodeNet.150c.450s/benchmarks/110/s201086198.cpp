#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;
typedef pair<int,int> P;
typedef pair<int, P> PP;
int dy[] = {-1, 0, 0, 1};
int dx[] = {0, -1, 1, 0};
struct BFS_Maze{
	vector<vector<int> > d, a;
	int sy, sx, ey, ex, h, w;
	void init(int inputH, int inputW){
		h = inputH, w = inputW;
		d.resize(h+2);
		a.resize(h+2);
		for(int i = 0;i < h+2;i++){
			d[i].resize(w+2);
			a[i].resize(w+2);
		}
	}
	
	void insertion(int y, int x, int v){a[y][x] = v;}
	void start(int y, int x){sy = y;sx = x;}
	void end(int y, int x){ey = y;ex = x;}
	
	int calc(){
		for(int i = 0;i < h+2;i++)d[i].assign(w+2, inf);
		queue<P> q;
		q.push(P(sy, sx));
		d[sy][sx] = 0;
		while(!q.empty()){
			P p = q.front();q.pop();
			int y = p.first, x = p.second;
			if(y == 0 || x == 0)continue;
			if(y == h+1 || x == w+1)continue;
			for(int i = 0;i < 4;i++){
				int yy = y+dy[i], xx = x+dx[i];
				if(d[yy][xx] > d[y][x]+1 && a[yy][xx] == 0){
					d[yy][xx] = d[y][x]+1;
					q.push(P(yy, xx));
				}
			}
		}
		return d[ey][ex];
	}
};

#define rep(i,n) for(int i = 0;i < n;i++)
#define rrep(i,n) for(int i = 1;i <= n;i++)
#define fi first
#define se second

char str[1010][1010];
int a[1010][1010];
int main(){
	BFS_Maze BM;
	int h, w, n;
	vector<PP> v;
	scanf("%d%d%d", &h, &w, &n);
	rep(i,h)scanf("%s", str[i]);
	BM.init(h, w);
	
	rep(i,h)rep(j,w){
		if(str[i][j] == 'S'){
			v.push_back(PP(0, P(i+1, j+1)));
		}else if(str[i][j] == 'X'){
			BM.insertion(i+1, j+1, 1);
		}else if(str[i][j] == '.'){
			BM.insertion(i+1, j+1, 0);
		}else{
			v.push_back(PP(str[i][j]-'0', P(i+1, j+1)));
		}
	}
	sort(v.begin(), v.end());
	
	int ans = 0;
	for(int i = 0;i < v.size()-1;i++){
		int y = v[i].se.fi, x = v[i].se.se;
		int yy = v[i+1].se.fi, xx = v[i+1].se.se;
		//M.init(h, w);
		BM.start(y, x);
		BM.end(yy, xx);
		int v = BM.calc();
		ans += v;
	}
	printf("%d\n", ans);
	return 0;
}
