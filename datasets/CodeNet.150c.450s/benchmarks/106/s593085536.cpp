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

signed main() {
	int a, b, c; cin >> a >> b >> c;
	int d = 0;
	for (; a <= b; a++) {
		if (c%a == 0)d++;
	}
	cout << d << endl;
}