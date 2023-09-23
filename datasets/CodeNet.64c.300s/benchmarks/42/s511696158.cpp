#include <iostream>
#include <cstdio>
#include <queue>
#define INF 1e+18
#define int long long
using namespace std;

signed main(){
	int n,m;
	while(cin >> n,n){
		int field[21][21] = {};
		bool used[21][21] = {};
		for(int i = 0;i < n;i++){
			int x,y;
			cin >> x >> y;
			field[x][y] = 1;
		}
		cin >> m;
		int x = 10,y = 10;
		for(int i = 0;i < m;i++){
			char d;
			int l;
			cin >> d >> l;
			for(int j = 0;j < l;j++){
				if(d == 'N') used[x][++y] = true;
				else if(d == 'S') used[x][--y] = true;
				else if(d == 'E') used[++x][y] = true;
				else used[--x][y] = true;
			}
		}
		int cnt = 0;
		for(int i = 0;i <= 20;i++){
			for(int j = 0;j <= 20;j++){
				if(used[i][j]) cnt += field[i][j];
			}
		}
		if(cnt == n) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}