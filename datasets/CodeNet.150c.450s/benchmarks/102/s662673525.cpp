#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int h, w, ans, sy, sx;
char s[21][21] = {};
int d[21][21] = {};
int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

void dfs(int y, int x){
	if (y < 0 || h <= y || x < 0 || w <= x || d[y][x]||s[y][x]=='#') return;
	ans++;
	d[y][x] = 1;
	rep(i, 0, 4){
		int ny = y + dy[i], nx = x + dx[i];
		dfs(ny, nx);
	}
	return;
}

int main(){
	while (1){
		cin >> w >> h;
		rep(i, 0, 21){
			rep(j, 0, 21){
				d[i][j] = 0;
			}
		}
		if (h == 0 && w == 0) break;
		rep(i, 0, h){
			rep(j, 0, w){
				cin >> s[i][j];
				if (s[i][j] == '@'){
					sy = i;
					sx = j;
				}
			}
		}
		ans = 0;
		dfs(sy, sx);
		o(ans);
	}

}