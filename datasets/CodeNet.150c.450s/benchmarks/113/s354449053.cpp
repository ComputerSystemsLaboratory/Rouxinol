#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> array;
	while (1) {
		int tmp;
		cin >> tmp;
		if (tmp == 0) break;
		array.push_back(tmp);
	}
	for (int i = 0; i < array.size(); i++) {
		cout << "Case " << i + 1 << ": " << array.at(i) << endl;
	}
	return 0;
}

