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

int w, h;
char s[55][55] = {};
int dy[8] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int f[55][55] = {};

void dfs(int y, int x){
	if (y < 0 || h <= y || x < 0 || w <= x || f[y][x] || s[y][x] == '0') return;
	f[y][x] = 1;
	rep(i, 0, 8){
		int ny = y + dy[i], nx = x + dx[i];
		dfs(ny, nx);
	}
	return;
}

int main(){
	while (1){
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		rep(i, 0, h){
			rep(j, 0, w){
				cin >> s[i][j];
			}
		}
		rep(i, 0, 55){
			rep(j, 0, 55){
				f[i][j] = 0;
			}
		}
		int c = 0;
		rep(i, 0, h){
			rep(j, 0, w){
				if (s[i][j] == '1' && f[i][j]==0){
					dfs(i, j);
					c++;
				}
			}
		}
		o(c);
	}
}