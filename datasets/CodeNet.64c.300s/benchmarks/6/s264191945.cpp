// ConsoleApplication7.cpp : ??????????????? ??¢????????±????????§????????¨????????? ?????????????????????????????????
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	int i, j, k;
	int n;
	int b, f, r, v;
	int building[4][3][10];

	cin >> n;
	memset(building, 0, sizeof(building));

	for (i = 0; i < n; i++) {
		cin >> b;
		cin >> f;
		cin >> r;
		cin >> v;
		building[b - 1][f - 1][r - 1] += v;
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 10; k++) {
				cout << " " << building[i][j][k];
			}
			cout << endl;
		}
		if (i < 3) {
			cout << "####################" << endl;
		}
	}

	return 0;
}