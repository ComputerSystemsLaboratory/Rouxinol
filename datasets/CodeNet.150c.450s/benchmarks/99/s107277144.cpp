#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
using namespace std;

int mtoi(string m) {
	const string mcxi = "mcxi";
	const int mcxiK[] = {1000, 100, 10, 1};
	int res = 0;
	int index, x;

	for (int i = 0; i < 4; i++) {
		x = 1;
		index = m.find(mcxi[i], 0);
		if (index != string::npos) {
			if (index != 0) {
				x = m[index - 1] - '0';
				if (x >= 10) {
					x = 1;
				}
			}
			res += mcxiK[i] * x;
		}
	}

	return res;
}

string itom(int integer) {
	const string mcxi = "mcxi";
	const int mcxiK[] = {1000, 100, 10, 1};
	string res("");
	int x;

	for (int i = 0; i < 4; i++) {
		x = integer / mcxiK[i];
		if (x != 0) {
			if (x != 1) {
				res += x + '0';
			}
			res += mcxi[i];
		}
		integer %= mcxiK[i];
	}
	
	return res;
}

int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string m1, m2;
		cin >> m1 >> m2;
		
		int sum = mtoi(m1) + mtoi(m2);

		cout << itom(sum) << endl;
	}

	return 0;
}