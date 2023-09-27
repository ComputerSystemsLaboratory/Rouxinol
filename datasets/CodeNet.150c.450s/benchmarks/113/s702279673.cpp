#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int x;
	int count = 1;
	while(1) {
		cin >> x;
		if (x == 0) break;
		else v.push_back(x);
	}
	for (auto n: v) {
		cout << "Case " << count << ": " << n << endl;
		count++;
	}
	return 0;
}