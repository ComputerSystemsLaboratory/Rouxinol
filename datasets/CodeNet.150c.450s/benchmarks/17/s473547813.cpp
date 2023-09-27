#include<iostream>
using namespace std;

int main() {
	int nums[5];
	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (nums[j] < nums[j + 1]) {
				swap(nums[j], nums[j + 1]);
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << nums[i] <<' ';
	}
	cout << nums[4] << endl;
	return 0;
}