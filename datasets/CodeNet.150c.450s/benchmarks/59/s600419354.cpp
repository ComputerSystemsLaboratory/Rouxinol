#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
using namespace std;

string JoinWithSpace(int *array, int size);

int main() {
	int n;
	cin >> n;

	int array[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for (int i = 1; i < n; i++) {
		cout << JoinWithSpace(array, n) << endl;
		int current = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > current) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = current;
	}

	cout << JoinWithSpace(array, n) << endl;
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