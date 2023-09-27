#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
using namespace std;

const int MAX_FRAME = 10000;

int makeLinerCongRand(int a, int b, int c, int x) {
	return (a * x + b) % c;
}


int main(void) {
	int n, a, b, c, x;
	while (cin >> n >> a >> b >> c >> x, n) {
		vector<int> reel(n);
		for (int i = 0; i < n; i++) {
			cin >> reel[i];
		}
		
		int frame = 0;
		int nowReel = 0;
		while (true) {
			if (reel[nowReel] == x) {
				nowReel++;
				if (nowReel == n) {
					break;
				}
			}
			if (++frame > MAX_FRAME) {
				break;
			}
			x = makeLinerCongRand(a, b, c, x);
		}

		cout << (frame <= MAX_FRAME ? frame : -1) << endl;
	}

	return 0;
}