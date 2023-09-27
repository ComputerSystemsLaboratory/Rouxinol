#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<bool> vec(30); int temp;
	fill(vec.begin(), vec.end(), false);
	while (cin >> temp) vec[temp - 1] = true;
	for (int i = 0; i < 30; i++)
		if (vec[i] == false) cout << i + 1 << endl;
	return 0;
}
