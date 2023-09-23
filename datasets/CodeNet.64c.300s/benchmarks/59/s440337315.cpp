#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

bool isPrime(int x) {
	if (x < 2)return 0;
	else if (x == 2)return 1;
	if (x % 2 == 0)return 0;
	for (int i = 3; i*i<= x; i+=2)
		if (x%i == 0)return 0;
	return 1;
}

int main() {
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		ans += isPrime(x);
	}
	cout << ans << endl;
	return 0;
}