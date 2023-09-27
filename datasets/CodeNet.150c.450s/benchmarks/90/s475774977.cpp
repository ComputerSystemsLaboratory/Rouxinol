#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec(100); vector<int> cop; int temp;
	fill(vec.begin(), vec.end(), 0);
	while (cin >> temp) vec[temp - 1]++;
	copy(vec.begin(), vec.end(), back_inserter(cop));
	sort(cop.begin(), cop.end(), greater<int>());
	for (int i = 0; i < 100; i++)
		if (vec[i] == cop[0]) cout << i + 1 << endl;
	return 0;
}
