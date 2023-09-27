#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string JoinWithSpace(int *array, int size);

int main() {
	int n;
	cin >> n;

	int array[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	int swap_count = 0;
	bool exist_adjacent = true;
	while (exist_adjacent) {
		exist_adjacent = false;
		for (int i = n - 1; i > 0; i--) {
			if (array[i] < array[i -1]) {
				swap(array[i], array[i - 1]);
				exist_adjacent = true;
				swap_count++;
			}
		}
	}
	cout << JoinWithSpace(array, n) << endl;
	cout << swap_count << endl;
	return 0;
}

string JoinWithSpace(int *array, int size) {
	ostringstream oss;
	for (int i = 0; i < size - 1; i++) {
		oss << array[i] << " ";
	}
	oss << array[size - 1];
	return oss.str();
}