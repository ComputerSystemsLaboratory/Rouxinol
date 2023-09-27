#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	const int len = 10;
	int arr[len];

	for (int i = 0; i < len; i++)
		cin >> arr[i];

	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);

	for (int i = len - 1; len - 4 < i; i--)
		cout << arr[i] << endl;

	return 0;
}