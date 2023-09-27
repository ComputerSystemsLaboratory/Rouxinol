#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> vec;
	while (cin >> n) {
		if (n != 0) vec.push_back(n);
		else {
			cout << vec[vec.size() - 1] << endl;
			vec.pop_back();
		}
	}
	return 0;
}
