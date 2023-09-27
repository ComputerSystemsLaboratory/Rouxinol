#include <bits/stdc++.h>
using namespace std;

int n;
map<char, int> mp;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	mp['N'] = 0;
	mp['S'] = 1;
	mp['E'] = 2;
	mp['W'] = 3;
	while(1){
		cin >> n;
		if(n == 0) return 0;
		int a[25][25] = {{}};
		for(int i=0; i<n; ++i){
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
		}
		int m;
		cin >> m;
		int p = 10, q = 10;
		int tmp = 0;
		if(a[p][q] == 1) ++tmp;
		for(int i=0; i<m; ++i){
			char c;
			int d;
			cin >> c >> d;
			for(int j=0; j<d; ++j){
				p += dx[mp.at(c)];
				q += dy[mp.at(c)];
				if(a[p][q] == 1){
					++tmp;
					a[p][q] = 0;
				}
			}
		}
		cout << (tmp == n ? "Yes\n" : "No\n");
	}
}
