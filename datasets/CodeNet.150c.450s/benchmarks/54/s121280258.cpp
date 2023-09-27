#include <iostream>
#include <string>
using namespace std;

int main()
{
	string W, L, T;
	int n = 0;
	unsigned long j = 0;

	cin >> W;

	for (unsigned int i = 0; i < W.size(); i++) {
		if (W[i] >= 'A' && W[i] <= 'Z')
			W[i] = tolower(W[i]);
	}		

	getline(cin, L);

	while (L != "END_OF_TEXT") {
		for (unsigned int i = 0; i < L.size(); i++) {
			if (L[i] >= 'A' && L[i] <= 'Z')
				L[i] = tolower(L[i]);
		}

		T += L + " ";

		getline(cin, L);
	}

	j = T.find(W);

	while (j < T.size()) {
		if ((j == 1) | (T[j - 1] == ' ')) {
			if ((j == T.size() - W.size()) | (T[j + W.size()] == ' '))
				n++;
		}

		j = T.find(W, j + 1);
	}

	cout << n << endl;

    return 0;
}