#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#define F(i,n) for(int i=0;i<(int)(n);i++)
#define INF 100000000
#define ll long long

using namespace std;
typedef pair<int, int> P;

int main() {
	int n, p;
	int a;
	int b[51];
	int all;
	int ans;
	while (1) {
		cin >> n >> p;
		if (n == 0 && p == 0)break;
		a = 0;
		all = p;
		F(i, n)b[i] = 0;
		while (1) {
			if (p == 0) {
				p = b[a];
				b[a] = 0;
			}
			else {
				b[a]++;
				p--;
				if (p == 0 && b[a] == all) {
					ans = a;
					break;
				}
			}
			a = (a + 1) % n;
		}
		cout << ans << endl;
	}
	return 0;
}