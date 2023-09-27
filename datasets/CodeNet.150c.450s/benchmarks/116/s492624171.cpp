#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#define REP(i, n) for(int i = 0;i < n;i++)
#define ll long long
#define INF 114514
using namespace std;




int main(){
	while (1) {
		long long n, k, now = 0, m = 0, i;
		long long a[100009];
		cin >> n >> k;
		if (n == 0 && k == 0) return 0;
		for (i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (i = 1; i <= k; i++) {
			now += a[i];
		}
		m = now;
		for (i = 1; i <= n - k; i++) {
			now = now - a[i] + a[i + k];
			if (now > m) m = now;
		}
		cout << m << endl;
	}
	return 0;
}