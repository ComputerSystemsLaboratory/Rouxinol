#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int S = 0, T = 0;

	for (int i = 0; i < 4; ++i) {
		int temp;
		cin >> temp;
		S += temp;
	}
	for (int i = 0; i < 4; ++i) {
		int temp;
		cin >> temp;
		T += temp;
	}

	cout << max(S, T) << endl;

	return 0;
}