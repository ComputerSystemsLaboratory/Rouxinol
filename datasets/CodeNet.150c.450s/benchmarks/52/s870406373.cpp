#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
	int n;
	vector<int> train;
	while (cin>>n) {
		if (n != 0) {
			train.emplace_back(n);
		}
		else {
			cout << train.back() << endl;
			train.pop_back();
		}
	}
	return 0;
}