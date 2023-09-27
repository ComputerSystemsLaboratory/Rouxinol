#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int a;
	while (cin >> a, a) {
		int b[1000];
		for (int c = 0; c < a; c++)scanf("%d", &b[c]);
		sort(b, b + a);
		int MAX = 1 << 29;
		for (int i = 1; i < a; i++) {
			MAX = min(MAX, abs(b[i] - b[i - 1]));
		}
		cout << MAX << endl;
	}
}