#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	const int dx[4] = {-1, 0, 1, 0};
	const int dy[4] = {0, 1, 0, -1};
	int c[500][500], N;
	while( cin >> N , N ){
		int min_x = 250, max_x = 250, min_y = 250, max_y = 250;
		for(int y = 0 ; y < 500 ; y++ ){
			for(int x = 0 ; x < 500 ; x++ ){
				c[y][x] = ( x == 250 && y == 250 )? 0 : -1;
			}
		}
		for(int i = 0 ; i < N - 1 ; i++ ){
			int n, d;
			cin >> n >> d;
			for(int y = min_y ; y <= max_y ; y++ ){
				for(int x = min_x ; x <= max_x ; x++ ){
					if( c[y][x] == n ){
						int mx = x + dx[d], my = y + dy[d];
						c[my][mx] = i + 1;
						max_x = max(max_x, mx);
						max_y = max(max_y, my);
						min_x = min(min_x, mx);
						min_y = min(min_y, my);
						break;
					}
				}
			}
		}
		cout << (max_x - min_x + 1) << " " << (max_y - min_y + 1) << endl;
	}
}