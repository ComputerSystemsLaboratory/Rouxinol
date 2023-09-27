#include <iostream>

using namespace std;

int main() {

	int x[10001], y[10001];
	int endOfInput;

	for (int i = 0; i < 10001; i++) {
		cin >> x[i] >> y[i];
		if (x[i] == 0 && y[i] == 0) {
			endOfInput = i;
			break;
		}
	}

	for (int i = 0; i < endOfInput; i++) {
		if (x[i] < y[i]) {
			cout << x[i] << " " << y[i] << endl;
		}
		else {
			cout << y[i] << " " << x[i] << endl;
		}
	}

	return 0;

}