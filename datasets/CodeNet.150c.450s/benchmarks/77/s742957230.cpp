#include <iostream>
#include <cstring>

using namespace std;

int map[21][21];

int main(){
	int n, x, y, ans, m, sx, sy;
	char d;
	while(cin >> n, n){
		ans = 0;
		memset(map, 0, sizeof(map));
		for(int i = 0;i < n;++i){
			cin >> x >> y;
			map[y][x]++;
		}
		cin >> m;
		sx = sy = 10;
		for(int i = 0;i < m;++i){
			cin >> d >> x;
			for(int j = 0;j < x;++j){
				switch (d) {
					case 'N':
						++sy;
						break;
					case 'E':
						++sx;
						break;
					case 'S':
						--sy;
						break;
					case 'W':
						--sx;
						break;
					default:
						break;
				}
				if(map[sy][sx]){
					ans += map[sy][sx];
					map[sy][sx] = 0;
				}
			}
		}
		cout << (ans == n ? "Yes" : "No") << endl;
	}
	return 0;
}

