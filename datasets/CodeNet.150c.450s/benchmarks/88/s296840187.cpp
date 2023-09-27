#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rect
{
	int h;
	int w;
	int d;

	Rect() {}
	Rect(int _h, int _w, int _d) : h(_h), w(_w), d(_d) {}

	bool operator<(const Rect& rhs) const {
		if(this->d == rhs.d) { return this->h < rhs.h; }
		return this->d < rhs.d;
	}
};

int main()
{
	vector<Rect> recs;

	for (int i = 1; i <= 150; ++i) {
		for (int j = i + 1; j <= 150; ++j) {
			int d = i * i + j * j;
			recs.emplace_back(i, j, d);
		}
	}

	while (1) {
		int h, w;
		cin >> h >> w;

		if (h == 0 && w == 0) { break; }

		sort(recs.begin(), recs.end());

		auto it = upper_bound(recs.begin(), recs.end(), Rect(h, w, h * h + w * w));
		cout << it->h << " " << it->w << endl;

	}
	return 0;
}