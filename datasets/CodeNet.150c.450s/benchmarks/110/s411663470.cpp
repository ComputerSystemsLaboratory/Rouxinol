#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=1;i<=n;i++)
#define drep(i,n) for(int i=n;i>=0;i--)
#define INF 100000005
#define MAX 100000001
#define dmp make_pair
#define dpb push_back
#define fi first
#define se second
using namespace std;
//__gcd(a,b), __builtin_popcount(a);

int dx[4] = {-1,0,0,1}, dy[4] = {0,-1,1,0};
char a[1002][1002];
int b[1002][1002];
queue<pair<int,int> > q;
int main(){
	int h, w, n, t = 0;
	char str[1000][1000];
	rep(i,1002)rep(j,1002)a[i][j] = 'X';
	scanf("%d%d%d", &h, &w, &n);
	rep(i,h)scanf("%s", str[i]);
	rep(i,h)rep(j,w){
		a[i+1][j+1] = str[i][j];
		if(a[i+1][j+1] == 'S'){
			q.push(dmp(i+1, j+1));
		}
	}
	
	pair<int,int> p;
	int x, y, xx, yy, tx, ty, res, ans = 0;
	for(int i = 1;i <= n;i++){
		fill((int*)b, (int*)(b+1002), INF);
		y = q.front().fi, x = q.front().se;
		b[y][x] = 0;
		while(!q.empty()){
			p = q.front();q.pop();
			y = p.fi;x = p.se;t = b[y][x];
			for(int j = 0;j < 4;j++){
				xx = x+dx[j], yy = y+dy[j];
				if(a[yy][xx] != 'X'){
					if(b[yy][xx] == INF)q.push(dmp(yy, xx));
					b[yy][xx] = min(b[yy][xx], t+1);
				}
			}
			if(a[y][x] == i+'0'){
				tx = x;ty = y;
				res = t;
			}
		}
		q.push(dmp(ty, tx));
		ans += res;
	}
	printf("%d\n", ans);
	return 0;
}