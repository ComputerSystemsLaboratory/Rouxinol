#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	vector<int> v;
	for(int i = 0; i < 10; ++i) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	partial_sort(v.begin(), v.begin() + 3, v.end()
		, [](const int& x, const int& y) { return x > y;});
	
	for_each(v.begin(), v.begin() + 3, [](int x) {
		cout << x << endl;
	});
}
