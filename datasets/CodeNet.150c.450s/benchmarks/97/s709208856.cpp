#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};


int main() {
	int n;
	while(cin >> n && n){
		if(n == 1){
			cout << 1 << " " << 1 << endl;
			continue;
		}
		int p, d, x[200] = {0}, y[200] = {0}, min_x = 0, max_x = 0, min_y = 0, max_y = 0;
		for(int i = 1; i <= n - 1; ++i){
			cin >> p >> d;
			x[i] = x[p] + dx[d];
			y[i] = y[p] + dy[d];
			min_x = min(min_x, x[i]);
			max_x = max(max_x, x[i]);
			min_y = min(min_y, y[i]);
			max_y = max(max_y, y[i]);
		}
		cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;
	}
	return 0;
}