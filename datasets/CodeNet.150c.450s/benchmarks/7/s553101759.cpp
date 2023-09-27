#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a;
	vector<int> v;
	while (cin >> a) {
		v.push_back(a);
	}
	sort(v.begin(), v.end(), greater<int>());
	
	cout << v[0] << "\n" << v[1] << "\n" << v[2] << "\n";
	return 0;
}