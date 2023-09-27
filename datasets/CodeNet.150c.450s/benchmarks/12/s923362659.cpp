#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const long long nil = -2000000001;
	int h = 0;

	cin >> h;

	vector<long long> t(h, nil), p(h, nil), l(h, nil), r(h, nil);

	for (int i = 0; i < h; i++)
		cin >> t[i];

	for (int i = 1; i < h; i++)
		p[i] = t[(i + 1) / 2 - 1];
	for (int i = 0; i < h / 2; i++)
		l[i] = t[2 * i + 1];
	for (int i = 0; i < (h - 1) / 2; i++)
		r[i] = t[2 * i + 2];

	for (int i = 0; i < h; i++) {
		cout << "node " << i + 1 << ": key = " << t[i] << ", ";

		if (p[i] != nil)
			cout << "parent key = " << p[i] << ", ";
		if (l[i] != nil)
			cout << "left key = " << l[i] << ", ";
		if (r[i] != nil)
			cout << "right key = " << r[i] << ", ";
		cout << endl;
	}

	return 0;
}
