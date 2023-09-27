#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
class rectangle {
public:
	int h, w, area;
	rectangle(int h1, int w1) {
		h = h1;
		w = w1;
		area = h1*h1 + w1*w1;
	}
	bool operator<(rectangle &other)const {
		if (this->area != other.area)return this->area < other.area;
		else return this->h < other.h;

	}
};
int main() {
	vector<rectangle>v;
	for (int i = 1; i <= 150; i++) {
		for (int j = i + 1; j <= 150; j++) {
			v.push_back(rectangle(i, j));
		}
	}
	sort(v.begin(), v.end());

	int h, w;
	while (cin >> h >> w, w) {
		auto out = upper_bound(v.begin(), v.end(), rectangle(h, w));
		cout << out->h << " " << out->w << endl;
	}
	return 0;
}