#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int main() {

	int no[5];

	for (int i = 0; i < 5; i++)
		cin >> no[i];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (no[j] < no[j + 1])
				swap(no[j], no[j + 1]);
		}
	}

	for (int i = 0; i < 5; i++) {
		if (i != 0) putchar(' ');
		cout << no[i];
	}
	putchar('\n');

	return 0;
}