#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int n;
	int *array;

	cin >> n;
	array = (int *)malloc(sizeof(int) * n);
	if (array == NULL) {
		cout << "malloc null" << endl;
		exit(1);
	}

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for (int i = n-1; i >=0; i--) {
		cout << array[i];
		if (i != 0) {
			cout << " ";		
		}
	}
	//cout << "end" << endl;

	cout << endl;

	free(array);

	return 0;
}