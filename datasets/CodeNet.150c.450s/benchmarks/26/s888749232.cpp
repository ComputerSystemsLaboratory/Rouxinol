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
	int a, b; cin >> a >> b;
	if (a > b) {
		puts("a > b");
	}
	else if (a < b) {
		puts("a < b");
	}
	else {
		puts("a == b");
	}
}