#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> v{a, b, c};
	sort(begin(v), end(v));
	for (auto iter=begin(v);iter != --end(v); ++iter){
		cout << *iter << " ";
	}
	cout << *--end(v) << endl;
}