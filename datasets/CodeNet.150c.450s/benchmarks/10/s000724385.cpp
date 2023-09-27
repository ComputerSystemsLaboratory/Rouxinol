#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string.h>
#include <deque>
#define REP(i,j,n) for(int i=j;i<n;i++)
#define SORT(x) sort(x.begin(),x.end())

using namespace std;

int main() {
	int vv[4][3][10];
	int b, f, r, v, n;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				vv[i][j][k] = 0;
			}
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		vv[b - 1][f - 1][r - 1] += v;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << " "<<vv[i][j][k];
				if(k==9) cout<< endl;
			}
		}
		if (i != 3) {
			for (int p = 0; p < 20; p++)cout << "#";
			cout << endl;
		}
	}
	return 0;
}