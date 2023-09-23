#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef vector<int> vi;
typedef vector<string> vs;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {

	while(true) {
		int n;
		cin >> n;
		if(!n) break;

		int l = 1, h = 2, num = 1, ans = 0;
		while(l <= h && h < n) {
			if(num < n) {
				num += h;
				h++;
			} else if(num > n) {
				num -= l;
				l++;
			}
			if(num == n) {
				if(h - l >= 2) ans++;
				num -= l;
				l++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}