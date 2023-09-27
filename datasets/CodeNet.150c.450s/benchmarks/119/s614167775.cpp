#include <iostream>
#include <vector>
#include <queue>

using namespace std;
const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(void) {
	int w,h;
	while(cin >> w >> h && w && h) {
		vector< vector<int> > data(h+2,vector<int>(w+2,0));
		for (int i = 1; i <= h; ++i) {
			for (int j = 1; j <= w; ++j) {
				cin >> data[i][j];
			}
		}

		int nx,ny;
		int count = 0;
		for (int i = 1; i <= h; ++i) {
			for (int j = 1; j <= w; ++j) {
				if (data[i][j] == 1) {
					nx = j;
					ny = i;
					data[i][j] = 0;
					queue<int> fx,fy;
					fx.push(nx);
					fy.push(ny);
					++count;

					while (!fx.empty()) {
						nx = fx.front();
						ny = fy.front();
						fx.pop();
						fy.pop();
						for (int d = 0; d < 8; ++d) {
							if (data[ny+dy[d]][nx+dx[d]] == 1) {
								fx.push(nx+dx[d]);
								fy.push(ny+dy[d]);
								data[ny+dy[d]][nx+dx[d]] = 0;
							}
						}
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}