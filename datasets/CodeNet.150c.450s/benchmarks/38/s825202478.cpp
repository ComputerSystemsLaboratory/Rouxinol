#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	for (cin >> n; n; n--) {
		vector<int> tri;
		for (int i = 0; i < 3; i++) {
			int a;
			cin >> a;
			tri.push_back(a);
		}
		sort(tri.begin(), tri.end());
		cout << (pow(tri[2], 2) == pow(tri[1], 2) + pow(tri[0], 2) ? "YES" : "NO") << endl;
	}

	return 0;
}