#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

void call(int n) {
	int i = 1;
	
	while (true) {
		int x = i;
		bool flag = true;
		if (x % 3 == 0) {
			cout << " " << i;
			flag = false;
		}
		while (flag) {
			if (x % 10 == 3) {
				cout << " " << i;
				break;
			}
			x /= 10;
			if (!x) {
				break;
			}
		}
		if (++i > n) {
			break;
		}
	}
	cout << endl;
}

int main(int argc, char **argv){
	int room[4][3][10] = {0};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		room[b - 1][f - 1][r - 1] += v;
	}
	for (int i = 0; i < 4; i++) {
		if (i != 0) {
			cout << "####################" << endl;
		}
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << " " << room[i][j][k];
			}
			cout << endl;
		}
	}
	return 0;
}