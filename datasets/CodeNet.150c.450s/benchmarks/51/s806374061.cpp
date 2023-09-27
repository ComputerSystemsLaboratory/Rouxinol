# include <iostream>
# include <vector>
# include <limits>
# include <algorithm>
# include <map>
using namespace std;

int main() {
	map<int, bool> a;
	for (int i = 1; i <= 30; i++) {
		a.insert(map<int, bool>::value_type(i, false));
	}
	int b;
	for (int i = 0; i < 28; i++) {
		cin >> b;
		a[b] = true;
	}
	for (int i = 1; i <= 30; i++) {
		if (a[i] == false) {
			cout << i << endl;
		}
	}
}