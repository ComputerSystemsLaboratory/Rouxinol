#include<iostream>

using namespace std;

int Bubble_Sort(int dat[], int size) {
	int count = 0;
	bool judge = 1;
	for (int i = 0; judge; ++i) {
		judge = 0;
		for (int j = size - 1; j >= i + 1; --j) {
			if (dat[j] < dat[j - 1]) {
				swap(dat[j], dat[j - 1]);
				judge = 1;
				++count;
			}
		}
	}
	return count;
}

int main() {
	const int max = 100;
	int size, count,dat[max];
	cin >> size;
	for (int i = 0; i < size; ++i) {
		cin >> dat[i];
	}
	count = Bubble_Sort(dat, size);

	for (int i = 0; i < size; ++i) {
		if (i != 0)cout << " ";
		cout << dat[i];
	}
	cout << endl << count << endl;
	return 0;
}