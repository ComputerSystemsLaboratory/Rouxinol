#include <iostream>
#include <string>
using namespace std;

int main()
{
	string W, L;
	int n = 0;

	getline(cin, W);

	for (unsigned int i = 0; i < W.size(); i++) {
		if (W[i] >= 'A' && W[i] <= 'Z')
			W[i] = tolower(W[i]);
	}

	W = " " + W + " ";

	getline(cin, L);

	while (L != "END_OF_TEXT") {
		for (unsigned int i = 0; i < L.size(); i++) {
			if (L[i] >= 'A' && L[i] <= 'Z')
				L[i] = tolower(L[i]);
		}

		L = " " + L + " ";

		unsigned int j = 0;

		j = L.find(W);

		while (j < L.size()) {
			n++;
			j = L.find(W, j + 1);
		}

		getline(cin, L);
	}

	cout << n << endl;

    return 0;
}