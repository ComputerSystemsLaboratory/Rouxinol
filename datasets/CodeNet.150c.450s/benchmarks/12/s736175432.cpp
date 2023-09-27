#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <list>
#include<set>
#include<map>
using namespace std;

int main() {
	int n, a[251] = {};
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n;i++) {
		cout << "node " << i  << ": key = " << a[i];
		if (i / 2 > 0) cout << ", parent key = " << a[i / 2];
		if (i * 2 <= n) cout << ", left key = " << a[2 * i];
		if (i * 2 + 1 <= n) cout << ", right key = " << a[2 * i + 1];
		cout << ", " << endl;
	}
}

