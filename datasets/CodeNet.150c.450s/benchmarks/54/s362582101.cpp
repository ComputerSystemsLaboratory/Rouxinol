#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string W;
	int num = 0;
	cin >> W;

	while (1) {
		string T;
		cin >> T;

		if (T == "END_OF_TEXT")
			break;

		for (int i = 0; i < T.size(); i++)
			if (T[i] <= 'Z' && T[i] >= 'A')
				T[i] = T[i] + 32;

		if (T == W)
			num++;

	}

	cout << num << endl;
}