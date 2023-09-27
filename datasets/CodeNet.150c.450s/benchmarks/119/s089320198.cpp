#include <iostream>
#include <vector>
#include <stack>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int w,h;
	cin >> w;
	cin >> h;

	while (w!=0||h!=0) {
		int count = 0;
		std::stack<int> st_x,st_y;
		int xn,yn;
		int c;
		bool all = false;
		std::vector< std::vector<bool> > island(h+2, std::vector<bool>(w+2));
		for (int i = 0; i < h+2; i++) {
			for (int j = 0; j < w+2; j++) {
				if (i==0||i==h+1||j==0||j==w+1) {
					island[i][j] = false;
				} else {
					cin >> c;
					if (c==1) {
						island[i][j] = true;
					} else {
						island[i][j] = false;
					}
				}
			}
		}

		while (!all) {
			all = true;
			for (int i = 1; i < h+1; i++) {
				for (int j = 1; j < w+1; j++) {
					if (island[i][j]) {
						xn = i;
						yn = j;
						all = false;
					}
				}
			}
			if (!all) {
				st_x.push(xn);
				st_y.push(yn);
				if (island[xn][yn]) {
					island[xn][yn] = false;
					count++;

					while (!st_x.empty()) {
						xn = st_x.top();
						yn = st_y.top();
						st_x.pop();
						st_y.pop();
						if (island[xn+1][yn]) {
							st_x.push(xn+1);
							st_y.push(yn);
							island[xn+1][yn] = false;
						}
						if (island[xn-1][yn]) {
							st_x.push(xn-1);
							st_y.push(yn);
							island[xn-1][yn] = false;
						}
						if (island[xn+1][yn+1]) {
							st_x.push(xn+1);
							st_y.push(yn+1);
							island[xn+1][yn+1] = false;
						}
						if (island[xn+1][yn-1]) {
							st_x.push(xn+1);
							st_y.push(yn-1);
							island[xn+1][yn-1] = false;
						}
						if (island[xn-1][yn+1]) {
							st_x.push(xn-1);
							st_y.push(yn+1);
							island[xn-1][yn+1] = false;
						}
						if (island[xn-1][yn-1]) {
							st_x.push(xn-1);
							st_y.push(yn-1);
							island[xn-1][yn-1] = false;
						}
						if (island[xn][yn+1]) {
							st_x.push(xn);
							st_y.push(yn+1);
							island[xn][yn+1] = false;
						}
						if (island[xn][yn-1]) {
							st_x.push(xn);
							st_y.push(yn-1);
							island[xn][yn-1] = false;
						}
					}
				}
			}
		}
		cout << count << endl;

		cin >> w;
		cin >> h;
	}	
		return 0;
}