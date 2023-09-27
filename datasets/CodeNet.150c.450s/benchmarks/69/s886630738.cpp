//
//  AOJ 0033 Ball
//
//  Created by TaoSama on 2015-02-19
//  Copyright (c) 2014 TaoSama. All rights reserved.
//
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <set>
#include <vector>
#define CLR(x,y) memset(x, y, sizeof(x))

using namespace std;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;

int a[15];
bool dfs(int k, int b, int c) {
	if(k == 11) return true;
	if(a[k] > b) if(dfs(k + 1, a[k], c)) return true;
	if(a[k] > c) if(dfs(k + 1, b, a[k])) return true;
	return false;
}

int main() {
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
//	freopen("out.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);

	int t; cin >> t;
	while(t--) {
		for(int i = 1; i <= 10; ++i) cin >> a[i];
		if(dfs(1, 0, 0))	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
	return 0;
}