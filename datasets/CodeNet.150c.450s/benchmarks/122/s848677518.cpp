#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<unsigned long> a;

void mH(vector<unsigned long> &a, unsigned long i) {
	unsigned long l, r, lg;
	l = 2 * i + 1;
	r = 2 * i + 2;

	if (l < a.size() && a[l] > a[i])
		lg = l;
	else
		lg = i;
	if (r < a.size() && a[r] > a[lg])
		lg = r;

	if (lg != i) {
		swap(a[i], a[lg]);
		mH(a, lg);
	}
}

int main()
{
	string s;

	cin >> s;

	while (s != "end") {
		if (s == "insert") {
			unsigned long k = 0, h = 0;
			cin >> k;
			a.push_back(k);

			h = a.size() - 1;
			while (h > 0) {
				h = (h - 1)/ 2;
				mH(a, h);
			}
		}
		else if (s == "extract") {
			cout << a[0] << endl;
			swap(a[0], a[a.size() - 1]);
			a.pop_back();

			if (a.size() > 1)
				mH(a, 0);
		}
		cin >> s;
	}

	return 0;
}
