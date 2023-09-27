#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int n, q,i,count = 0;
	int S[10000], T[500];

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> S[i];
	}

	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> T[i];
		for (int j = 0; j < n; j++) {
			if (T[i] == S[j]) {
				count++;
				break;
			}
		}
	}

	cout << count << endl;

	return 0;

}