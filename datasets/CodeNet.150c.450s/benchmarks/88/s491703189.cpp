#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define RREP(i, a, n) for(int i=n-1; i>=a; i--)
#define INF 1000000000

bool isSmall(int h1, int w1, int h2, int w2) {
	int d1 = h1*h1 + w1*w1;
	int d2 = h2*h2 + w2*w2;

	if (d1 < d2) return true;
	else if (d1 > d2) return false;
	else if (h1 < h2) return true;
	else return false;
}

int main() {
	int h, w;
	while (cin >> h >> w, h || w) {
		int ans_h = INF, ans_w = INF;
		int diag = h*h + w*w;
		int mnd = INF, mnh = 0;

		REP(i, 1, 151) {
			REP(j, i + 1, 151) {
				int x = i*i + j*j;
				
				if (i == h && j == w) continue;
				if (isSmall(i, j, h, w)) continue;

				if (isSmall(i, j, ans_h, ans_w)) {
					ans_h = i;
					ans_w = j;
				}
			}
		}

		cout << ans_h << " " << ans_w << endl;
	}
	return 0;
}