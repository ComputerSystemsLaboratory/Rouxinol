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
	int x, y, s;

	for (int h = 0;; h++) {
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0)break;

		vector<int> a(s);
		int max = 0;
		for (int i = 1; i < s; i++)
			a[i] = i*(100 + x) / 100;
		for (int i = 1; i < s; i++) {
			for (int j = 1; j < s; j++) {
				if (a[i] + a[j] == s) {
					int b = i*(100 + y) / 100;
					int c = j*(100 + y) / 100;
					int d = b + c;
					if (d > max)max = d;
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}