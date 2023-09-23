#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int n;
	while (cin >> n&&n != 0) {
		int sum = 0;
		for (int i = 1; i <= round(n / 2); i++) {
			int a = 0,j=i;
			while (a < n) {
				a += j;
				j++;
			}
			if (a == n) sum++;
		}
		cout << sum << endl;
	}
}