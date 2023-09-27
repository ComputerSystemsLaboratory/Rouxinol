#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;
const int64_t MOD = 1e9 + 7;

int n;
vector<int> v;

int partition(int p, int r) {

	//for (int i = 0; i < v.size(); i++) {
	//	if (i) cout << ' ';
	//	cout << v.at(i);
	//}
	//cout << endl;

	int x, i, j, t;
	x = v.at(r);
	i = p - 1;

	for (int j = p; j < r; j++) {
		if (v.at(j) <= x) {
			i++;
			t = v.at(i);
			v.at(i) = v.at(j);
			v.at(j) = t;
		}
	}

	t = v.at(i + 1);
	v.at(i + 1) = v.at(r);
	v.at(r) = t;

	return i + 1;
}

int main() {
	int q;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	q = partition(0, n - 1);

	for (int i = 0; i < n; i++) {
		if (i) cout << ' ';
		if (i == q) {
			cout << "[" << v.at(i) << "]";
		}
		else {
			cout << v.at(i);
		}
	}
	cout << endl;
}
