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

bool K(int a) {
	if (a % 3 == 0)return true;
	string b = to_string(a);
	for (char c : b) {
		if (c == '3')return true;
	}
	return false;
}
signed main() {
	int a; cin >> a;
	for (int i = 1; i <= a; i++) {
		if (K(i))cout << " " << i;
	}
	puts("");
}