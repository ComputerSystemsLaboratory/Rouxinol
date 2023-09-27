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
	for (int i = 0; i < n -1; i++) {

		int min = i;
		for (int j = i; j < n; j++) {
			if (array[j] < array[min]) {
				min = j;
			}
		}

		if (i != min) {
			swap(array[i], array[min]);
			swap_count++;
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