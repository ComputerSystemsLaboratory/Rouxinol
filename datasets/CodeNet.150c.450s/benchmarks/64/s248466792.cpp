#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i < (int)n; i++)
#define Loopr(i, n) for(int i= (int)n - 1; i >= 0; i--)

using namespace std;
typedef long long int ll;

int n, q;
vector<int> a(20);

bool func(int k, int m) {
	if (m == 0) return true;
	else if (k < n) {
		return func(k + 1, m) || func(k + 1, m - a[k]);
	}
	else return false;
}


int main() {
	cin >> n;
	Loop(i, n) cin >> a[i];
	cin >> q;
	Loop(i, q) {
		int m;
		cin >> m;
		if (func(0, m)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}