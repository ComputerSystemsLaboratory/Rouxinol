#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n; cin >> n;
		if(n == 0 ) break;
		vector<vector<bool> > m(21,vector<bool>(21,false));
		for(int i = 0; i < n; ++i){
			int x,y; cin >> x >> y;
			m[x][y] = true;
		}
		int nx = 10, ny = 10;
		int q; cin >> q;
		for(int i = 0; i < q; ++i){
			char d;
			int dis; cin >> d >> dis;
			int dx = 0,dy = 0;
			switch(d){
				case 'S':
					dy = -1;
					break;
				case 'N':
					dy = 1;
					break;
				case 'W':
					dx = -1;
					break;
				case 'E':
					dx = 1;
					break;
			}
			for(int j = 0; j < dis; ++j){
				nx += dx;
				ny += dy;
				m[nx][ny] = false;
			}
		}
		bool flag = true;
		for(int i = 0; i < 21; ++i)for(int j = 0; j < 21; ++j){
			if(m[i][j]){
				flag = false;
				break;
			}
		}
		if(flag)cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}