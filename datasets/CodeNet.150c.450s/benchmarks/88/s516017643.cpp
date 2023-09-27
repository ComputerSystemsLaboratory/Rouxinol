#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

typedef struct {
	int h = 0;
	int w = 0;
}rectangle;

int main() {
	rectangle rect[12000];
	rect[0].h = 1, rect[0].w = 2;
	int cnt = 0;
	for (int i = 1; i < 150; ++i) {
		for (int j = i + 1; j < 150; ++j) {
			int k;
			for (k = cnt; k > 0; --k) {
				if ((i * i + j * j) < (pow(rect[k - 1].w, 2) + pow(rect[k - 1].h, 2))) rect[k] = rect[k - 1];
				else {
					rect[k].h = i, rect[k].w = j;
					break;
				}
			}
			cnt++;
		}
	}
	
	int x, y;
	while (cin >> x >> y && (x || y)) {
		int num = 0;
		while (!(rect[num].h == x && rect[num].w == y))num++;
		cout << rect[num + 1].h << " " << rect[num + 1].w << endl;
	}


	return 0;
}
