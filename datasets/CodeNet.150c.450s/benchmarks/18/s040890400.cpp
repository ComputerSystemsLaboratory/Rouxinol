#include<iostream>
using namespace std;

int main() {
	int df = 100000;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		df *= 1.05;
		if (df % 1000 != 0) {
			df /= 1000;
			df++;
			df *= 1000;
		}
	}
	cout << df << endl;
	return 0;
}