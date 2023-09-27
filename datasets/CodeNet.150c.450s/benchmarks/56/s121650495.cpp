#include<iostream>

using namespace std;

int main() {
	int n;
	int Min;
	int Max;
	long long Sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (i == 0) {
			Min = Max = a;
		}
		else {
			if (Min > a)Min = a;
			if (Max < a)Max = a;
		}
		Sum += a;
	}

	cout << Min << " " << Max << " " << Sum << endl;

	return 0;
}