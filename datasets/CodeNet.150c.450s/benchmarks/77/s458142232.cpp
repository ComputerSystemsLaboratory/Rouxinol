#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
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

int main(){
	while (1){
		int n, m;
		cin >> n;
		if (n == 0) break;
		int d[30][30] = {};
		rep(i, 0, n){
			int y, x;
			cin >> x >> y;
			d[x][y] = 1;
		}
		int cnt = 0;
		cin >> m;
		int y = 10, x = 10;
		rep(i, 0, m){
			char s;
			int a;
			cin >> s >> a;
			while(a--){
				if (s == 'N') y++;
				else if (s == 'E') x++;
				else if (s == 'W') x--;
				else if (s == 'S') y--;
				if (d[x][y]){
					cnt++; d[x][y] = 0;
				}
			}
		}
		if (cnt == n) o("Yes");
		else o("No");
	}
}