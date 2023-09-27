#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	char number[1001];

	while (1) {
		cin >> number;

		sum = 0;

		for (int i = 0; i < 1000; i++) {
			if (number[i] == 0)
				break;
			sum += number[i] - '0';
		}

		if (sum == 0)
			break;
		else
		cout << sum << endl;
	}

	return 0;
}