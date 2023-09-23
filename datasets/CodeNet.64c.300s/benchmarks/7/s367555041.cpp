#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int c[4][14] = { {0} };
	for (int i = 0; i < n; i++) {
		char e;
		int f;
		cin >> e >> f;
		if (e == 'S')c[0][f] = 1;
		else if (e == 'H')c[1][f] = 1;
		else if (e == 'C')c[2][f] = 1;
		else if (e == 'D')c[3][f] = 1;
	}
	for (int i = 0; i < 4; i++)
		for (int j = 1; j <= 13; j++) {
			if (c[i][j])continue;
			else {
				switch (i) {
				case 0:
					cout << "S ";
					break;
				case 1:
					cout << "H ";
					break;
				case 2:
					cout << "C ";
					break;
				case 3:
					cout << "D ";
					break;
				}
				cout << j << endl;
			}
		}


	return 0;
}