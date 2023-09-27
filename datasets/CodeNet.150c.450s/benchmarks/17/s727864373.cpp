# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <cmath>
# include <iomanip>
# include <functional>

using namespace std;

int main() {
	int a;
	vector<int> v;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		v.emplace_back(a);
	}
	sort(v.begin(), v.end(), std::greater<int>());
	for (int i = 0; i < 5; i++) {
		cout << v[i];
		if (i != 4) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}
}