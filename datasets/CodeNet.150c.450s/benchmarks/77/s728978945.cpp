#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;


int main(void) {
	while(1){
		int n, m;
		cin >> n;
		if(n == 0) break;

		bool ma[22][22];
		memset(ma, 0, sizeof(ma));
		for(int i=0; i<n; i++){
			int x, y;
			cin >> x >> y;
			ma[y][x] = true;
		}

		cin >> m;
		int px = 10;
		int py = 10;
		int col = 0;
		if(ma[py][px] == true) {
			col++;
			ma[py][px] = false;
		}
		for(int i=0; i<m; i++){
			char d;
			int l;
			cin >> d >> l;
			int dx = 0;
			int dy = 0;
			switch(d){
				case 'N':
					dy = 1;
					break;
				case 'E':
					dx = 1;
					break;
				case 'S':
					dy = -1;
					break;
				case 'W':
					dx = -1;
					break;
			}

			for(int i=0; i<l; i++){
				px += dx;
				py += dy;
				if(ma[py][px]){
					col++;
					ma[py][px] = false;
				}
			}
		}
		if(col == n){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	
	return 0;
}