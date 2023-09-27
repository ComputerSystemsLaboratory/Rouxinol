#include <iostream>
#include <vector>
using namespace std;

int main() {
	int temp; vector<int> vec(0);
	while (cin >> temp) {
		if (temp == 0) {
			cout << vec[vec.size() - 1] << endl;
			vec.pop_back();
		}
		else vec.push_back(temp);
	}
	return 0;
}
