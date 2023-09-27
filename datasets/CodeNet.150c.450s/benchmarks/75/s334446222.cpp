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

int h;
vector<int> A(500010);

void maxheapify(int a) {
	if (a > h / 2) return;
	int p = A[a], l = A[a * 2], r = A[a * 2 + 1];
	int m = a;
	if (p < l&&r < l) m = a * 2;
	else if (p < r&&l < r) m = a * 2 + 1;
	if (m != a) {
		int pass = A[m];
		A[m] = p;
		A[a] = pass;
		maxheapify(m);
	}
}

int main() {
	cin >> h;
	Loop1(i, h) {
		cin >> A[i];
	}
	A[h + 1] = INT_MIN;
	Loopr1(i, h / 2) {
		maxheapify(i);
	}
	Loop1(i, h) {
		cout << " " << A[i];
	}
	cout << endl;
	return 0;
}