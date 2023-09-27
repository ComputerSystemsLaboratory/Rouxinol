#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int h = 0;
const long long nil = -2000000001;
vector<long long> a;

void mH(vector<long long> &a, int i) {
	int lg = 0;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < h && a[l] > a[i])
		lg = l;
	else
		lg = i;
	if (r < h && a[r] > a[lg])
		lg = r;

	if (lg != i) {
		swap(a[i], a[lg]);
		mH(a, lg);
	}
}

int main()
{
	cin >> h;

	a.assign(h, nil);

	for (int i = 0; i < h; i++)
		cin >> a[i];

	for (int i = h / 2 - 1; i > -1; i--)
		mH(a, i);

	for (int i = 0; i < h; i++)
		cout << " " << a[i];
	cout << endl;

	return 0;
}

