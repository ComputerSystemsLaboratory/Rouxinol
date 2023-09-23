//============================================================================
// Name        : svdzva.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
int main() {
	while (true) {
		int n, play1 = 0, play2 = 0, card1[10000], card2[10000];
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++) {
			cin >> card1[i] >> card2[i];
			if (card1[i] > card2[i]) {
				play1 = play1 + card1[i] + card2[i];
			} else if (card1[i] < card2[i]) {
				play2 = play2 + card2[i] + card1[i];
			} else {
				play1 = play1 + card1[i];
				play2 = play2 + card2[i];
			}
		}
		cout << play1 <<" "<<play2 << endl;
	}
	return 0;
}