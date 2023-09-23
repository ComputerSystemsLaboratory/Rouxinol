#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<functional>
using namespace std;

int c[100][100];
int f[100];
signed main() {
	int a, b; cin >> a >> b;
	for (int d = 0; d < a; d++) {
		for (int e = 0; e < b; e++) {
			cin >> c[d][e];
		}
	}
	for (int g = 0; g < b; g++)cin >> f[g];
	for (int i = 0; i < a; i++) {
		int sum = 0;
		for (int j = 0; j < b; j++) {
			sum += c[i][j] * f[j];
		}
		cout << sum << endl;
	}
}