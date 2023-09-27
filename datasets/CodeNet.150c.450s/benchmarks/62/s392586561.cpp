#include <iostream>
using namespace std;

int main() {
	const int size = 3;
	int nums[size];
	int buf;

	for (int i = 0; i < size; i++)cin >> nums[i];

	for (int i = 0; i < size; i++) {
		for (int j = size -1; j > 0; j--) {
			if (nums[j - 1] > nums[j]) {
				buf = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = buf;
			}
		}
	}

	cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;


}
