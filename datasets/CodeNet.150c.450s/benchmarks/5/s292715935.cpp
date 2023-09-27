
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define pi 3.14159265358979323846264338
using namespace std;

int main() {
	int n,j;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		cin >> j;
		vec.emplace_back(j);
	}
	for (int i = n-1; i >= 0; --i) {
		if (i == 0) {
			cout <<vec[i]<< endl;
		}
		else {
			cout << vec[i] << " ";
		}
	}
	return 0;
}