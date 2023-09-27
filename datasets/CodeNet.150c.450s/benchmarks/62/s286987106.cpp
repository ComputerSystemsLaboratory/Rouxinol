#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
	vector<int> v;
	int tmp;
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), [](int a, int b) {return a < b; });
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i == v.size() - 1)
			cout << endl;
		else
			cout << " ";
	}
}