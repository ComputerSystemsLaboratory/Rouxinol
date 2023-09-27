#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int cps(int w1, int h1, int w2, int h2) {
	int t1 = w1*w1 + h1*h1;
	int t2 = w2*w2 + h2*h2;
	if (t1<t2)return -1;
	else if (t1>t2)return 1;
	else if (h1<h2)return -1;
	else if (h1>h2)return 1;
	return 0;
}

int main(void) {
	for (;;) {
		int h, w;
		cin >> h >> w;
		if (h == 0 && w == 0) {
			break;
		}

		int mh, mw;
		mh = mw = 200;

		for (int hh = 1; hh <= 150; ++hh) {
			for (int ww = hh + 1; ww <= 150; ++ww) {
				if (cps(w, h, ww, hh) < 0 && cps(ww, hh, mw, mh) < 0) {
					mw = ww;
					mh = hh;
				}
			}
		}
		printf("%d %d\n", mh, mw);
	}
	return 0;
}