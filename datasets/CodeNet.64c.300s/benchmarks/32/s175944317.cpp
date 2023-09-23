#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* array = new int[n];
	for(int i=0; i<n; i++) {
		cin >> array[i];
	}

	int min = array[0], max = array[0];
	long sum = 0;
	for(int i=0; i<n; i++) {
		if(array[i] < min) min = array[i];
		if(array[i] > max) max = array[i];
		sum += array[i];
	}

	cout << min << " " << max << " " << sum << endl;
}