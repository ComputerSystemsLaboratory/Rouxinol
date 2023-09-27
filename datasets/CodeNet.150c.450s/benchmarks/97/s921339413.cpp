#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

int main()
{
	int n;
	while(cin >> n, n) {
		
		vector<int> xs(1, 0), ys(1, 0);

		int left = 0, right = 0, top = 0, bottom = 0;

		for(int i = 0; i < n - 1; ++i) {
			int m, d;
			cin >> m >> d;

			int x = xs[m] + dx[d], y = ys[m] + dy[d];
			
			left = min(left, x);
			right = max(right, x);
			top = min(top, y);
			bottom = max(bottom, y);

			xs.push_back(x);
			ys.push_back(y);
		}
		
		/*for(int i = 0; i < n; ++i) {
			cout << xs[i] << ' ' << ys[i] << endl;
		}*/
		cout << right - left + 1 << ' ' << bottom - top + 1 << endl;
	}
}