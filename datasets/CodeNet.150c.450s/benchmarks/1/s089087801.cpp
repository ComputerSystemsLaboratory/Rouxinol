#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<limits>
#include<list>
#include<map>
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

int main() {
	int n; cin >> n;
	vector<int> v(n, INF);
	for (int i = 0; i < n; i++) {
		int a; scanf("%d", &a);
		*lower_bound(v.begin(), v.end(), a) = a;
	}
	cout << find(v.begin(), v.end(), INF) - v.begin() << endl;
	return 0;
}