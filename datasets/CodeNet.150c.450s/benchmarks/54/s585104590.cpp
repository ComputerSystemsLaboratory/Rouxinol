#include <iostream>
#include <string>
using namespace std;

int main() {
	string T,W;
	int x;

	cin >> T;
	x = 0;

	while (1) {
		cin >> W;

		if (W == "END_OF_TEXT")
			break;

		for (int i = 0;i < W.length();i++)
			W[i] = tolower(W[i]);

		if (W == T)
			x++;
	}

	cout << x << endl;
	return 0;
}