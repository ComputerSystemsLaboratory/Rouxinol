#include <iostream>
#include <algorithm>
#include <sstream>
#include <functional>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

typedef pair<int, int> PII;
typedef pair<PII, int> PIII;

int f ( int a, int b )
{
	return a*a + b*b;
}

int main ( void )
{
	int h, w;
	vector<PIII> vp;
	for (int i = 1; i <= 200; ++i) {
		for (int j = i+1; j <= 200; ++j) {
			vp.push_back(PIII(PII(f(i, j), i), j));
		}
	}
	sort(vp.begin(), vp.end());

	while (cin >> h >> w, h|w) {
		for (int i = 0; i < vp.size(); ++i) {
			PIII pp = vp[i];
			PII p = vp[i].first;
			int hh = p.second;
			int ww = vp[i].second;
			if (hh == h && ww == w) {
				PIII nx = vp[i+1];
				cout << nx.first.second << ' ' << nx.second << endl;
				break;
			}
		}
	}
	return 0;
}