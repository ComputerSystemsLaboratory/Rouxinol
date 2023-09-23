#include<iostream>
using namespace std;

int bubbleSort(int num[], int N) {
	int count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= 1 + i; j--) {
			if (num[j] < num[j - 1]) {
				swap(num[j], num[j - 1]);
				count++;
			}
		}
	}
	return count;
}

int main(void) {
	int N, num[100];

	cin >> N;
	for (int i = 0; i < N; i++) cin >> num[i];

	int count = bubbleSort(num, N);
	for (int i = 0; i < N; i++) {
		if (i > 0) cout << " ";
		cout << num[i];
	}
	cout << endl << count << endl;

	return 0;
}