#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v(3);
	for (int i = 0; i < 3; ++i) cin >> v[i];
	sort( v.begin(), v.end() );
	for (int i = 0; i < 3; ++i) {
		if (i) cout << " ";
		cout << v[i];
	}
	cout << endl;
}