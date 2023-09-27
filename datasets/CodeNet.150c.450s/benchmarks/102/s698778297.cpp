#include <iostream>
#include <vector>
#include <stack>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int W,H;
	cin >> W;
	cin >> H;

	while (W!=0||H!=0) {
		int count = 0;
		char c;
		std::stack<int> st_x;
		std::stack<int> st_y;
		int xn,yn;
		std::vector< std::vector<bool> > tile(W+2, std::vector<bool>(H+2));
		for (int i = 0; i < H+2; i++) {
			for (int j = 0; j < W+2; j++) {
				if (i==0||i==H+1||j==0||j==W+1) {
					tile[j][i] = false;
				} else {
					cin >> c;
					if (c=='.') {
						tile[j][i] = true;
					}
					if (c=='#') {
						tile[j][i] = false;
					}
					if (c=='@') {
						tile[j][i] = false;
						st_x.push(j);
						st_y.push(i);
						count++;
					}
				}
			}
		}
		while (!st_x.empty()) {
			xn = st_x.top();
			yn = st_y.top();
			st_x.pop();
			st_y.pop();

			if (tile[xn+1][yn]) {
				st_x.push(xn+1);
				st_y.push(yn);
				tile[xn+1][yn] = false;
				count++;
			}
			if (tile[xn-1][yn]) {
				st_x.push(xn-1);
				st_y.push(yn);
				tile[xn-1][yn] = false;
				count++;
			}
			if (tile[xn][yn+1]) {
				st_x.push(xn);
				st_y.push(yn+1);
				tile[xn][yn+1] = false;
				count++;
			}
			if (tile[xn][yn-1]) {
				st_x.push(xn);
				st_y.push(yn-1);
				tile[xn][yn-1] = false;
				count++;
			}
		}
		cout << count << endl;

		cin >> W;
		cin >> H;
	}
	return 0;
}