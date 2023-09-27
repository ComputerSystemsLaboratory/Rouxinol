#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include<cstdio>
#include <vector>
#include<queue>
#include<limits.h>
#include<string.h>
#include<functional>
using namespace std;

int a[100];
signed main() {
	int b; cin >> b;
	for (int c = 0; c < b; c++) {
		cin >> a[c];
	}
	reverse(a, a + b);
	for (int c = 0; c < b; c++) {
		if (c)cout << " ";
		cout << a[c];
	}
	cout << endl;
}