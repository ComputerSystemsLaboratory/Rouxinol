#include <iostream>
#include<cstdio>
#include<string>
#include <string.h>
#include<stdio.h>
using namespace std;

int main() {
	string W, T;
	int count = 0;
	cin >> W;

	for (int i = 0; i<W.size(); i++) {
		if ('A' <= W[i] && W[i] <= 'Z') {
			W[i] += 'a' - 'A';
		}
			
	}

	while (true) {
		cin >> T;
		if (T == "END_OF_TEXT") {
			break;
		}

		for (int i = 0; i<T.size(); i++) {
			if ('A' <= T[i] && T[i] <= 'Z') T[i] += 'a' - 'A';
		}

		if (W == T) {
			count++;
		}

		
	}

	cout << count << endl;

	return 0;
}


