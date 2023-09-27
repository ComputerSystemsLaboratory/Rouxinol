#include <iostream>
#include <algorithm>
#include <array>
#include <functional>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string>
#include <vector>

#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define bitget(a,b) (((a) >> (b)) & 1)
#define vint vector<int>
#define vvint vector<vector<int>>
#define vsort(x) sort(x.begin(),x.end())

using int64 = uint64_t;

using namespace std;

int main() {
	vint x(28);
	rep(i, 0, 28)
		cin >> x[i];
	vsort(x);
	int now = 1;
	rep(i, 0, 28) {
		if (x[i] != now) {
			while (x[i] != now) {
				cout << now << endl;
				now++;
			}
		}
		now++;
	}
	if (now < 31) {
		while (now < 31) {
			cout << now << endl;
			now++;
		}
	}
	return 0;
}