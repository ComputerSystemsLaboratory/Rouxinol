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
#include<map>
#include<set>
#include<list>
#include<unordered_map>
#include<queue>
#define int long long
using namespace std;

signed main(){
	int a; cin >> a;
	int b = 0, c = 1;
	for (int d = 0; d < a; d++) {
		int e = b + c;
		b = c;
		c = e;
	}
	cout << c << endl;
}