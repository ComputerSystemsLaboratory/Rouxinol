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
using namespace std;

signed main(){
	unordered_map<int, bool>U;
	int a; cin >> a;
	while (a--) {
		int b; cin >> b;
		U[b] = true;
	}
	int ans = 0;
	cin >> a;
	while (a--) {
		int b; cin >> b;
		ans += U[b];
	}
	cout << ans << endl;
}