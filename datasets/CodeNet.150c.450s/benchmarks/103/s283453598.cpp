#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>
#include <utility>

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
#define REPS(a,i,n) for(int i = a ; i < n ; ++i)
using namespace std;

int ans;
int a, b;

void solve(int i, int _b, int sum){
	if (sum == a && _b == 0){
		ans++;
		return;
	}
	if (_b == 0 || i == 10)return;
	if (i != -1)
		solve(i + 1, _b - 1, sum + i);
	solve(i + 1, _b, sum);
}

int main(){
	while (cin >> b >> a, a||b){
		ans = 0;
		solve(-1, b, 0);
		cout << ans << endl;

	}
	return 0;
}