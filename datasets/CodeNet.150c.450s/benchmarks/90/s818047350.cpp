#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> array;
	int stock;

	while (cin >> stock) {
		if (stock == 0) break;
		array.push_back(stock);
	}

	int time[101] = { 0 };

	for (int i = 0;i < array.size();i++) {
		time[array.at(i)]++;
	}

	int max = 0;
	for (int j = 0;j < 100;j++) {
		if (time[j + 1] > max) {
			max = time[j + 1];
		}
	}
	for (int k = 0;k < 100;k++) {
		if (time[k + 1] == max) {
			cout << k + 1 << endl;
		}
	}
	
	return 0;
}