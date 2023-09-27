#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<functional>
using namespace std;

int main() {
	int a, b, c;
	while (cin >> a >> b >> c, a | b | c) {
		int MAX = 0;
		for (int d = 1; d <= c; d++) {
			for (int e = 1; e <= c; e++) {
				if (d*(100 + a) / 100 + e*(100 + a) / 100 == c) {
					MAX = max(MAX, d*(100 + b) / 100 + e*(100 + b) / 100);
				}
			}
		}
		cout << MAX << endl;
	}
}