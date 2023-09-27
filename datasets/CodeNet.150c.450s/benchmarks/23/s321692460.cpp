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
#define INT_MIN -2147483646
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;

vector<ll> A(100);

int main() {
	int n;
	cin >> n;
	if (n == 0) cout << 1 << endl;
	else if (n == 1) cout << 1 << endl;
	else {
		A[0] = 1;
		A[1] = 1;
		for (int i = 2;i <= n;i++) {
			A[i] = A[i - 1] + A[i - 2];
		}
		cout << A[n] << endl;
	}
	return 0;
}