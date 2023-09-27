#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<int> va;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		va.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		int v = va.at(i);
		for (int j = 0; j < i; j++) {
			int w = va.at(j);
			if (v < w) {
				va.erase(va.cbegin() + i);
				va.insert(va.cbegin() + j, v);
				break;
			}
		}

		for_each(va.begin(), va.end() - 1, [](int x) {
			cout << x << " ";
		});
		cout << va.at(n - 1) << "\n";
	}

	return 0;
}
