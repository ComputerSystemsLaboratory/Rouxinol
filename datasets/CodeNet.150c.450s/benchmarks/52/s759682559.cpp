#include<iostream>
#include<vector>
#include<string>
using namespace std;

signed main() {
	vector<int>a;
	int b;
	while (cin >> b) {
		if (b)a.push_back(b);
		else { cout << a[a.size() - 1] << endl; a.pop_back(); }
	}
}