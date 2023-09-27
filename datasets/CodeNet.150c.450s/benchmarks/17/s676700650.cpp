#include <iostream>
#include <algorithm>

#define SIZE 5

using namespace std;

int main() {
	int list[5];
	for (int i = 0; i < SIZE; i++) {
		cin >> list[i];
	}

	sort(list, list+SIZE);

	for (int i = 0; i < SIZE - 1; i++) {
		cout << list[SIZE - i - 1] << " ";
	}
	cout << list[0] << endl;

	return 0;
}