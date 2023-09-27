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
void solve(int x) {
	x = 1000 - x;
	int cnt = 0;
	int a[6] = { 500,100,50,10,5,1 };
	rep(i,0,6){
		while (x >= a[i]) {
			x -= a[i];
			cnt++;
		}
	}
	cout << cnt << endl;
}
int main() {

	int i, j, k;
	int n;
	cin >> n;
	while (n != 0) {
		solve(n);
		cin >> n;
	}
	return 0;
}