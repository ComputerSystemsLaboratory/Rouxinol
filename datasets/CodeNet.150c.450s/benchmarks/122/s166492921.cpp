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
vector<int> A(2000005);

void func1(int a) {
	if (a == 0) return;
	int p = A[a], l = A[a * 2], r = A[a * 2 + 1];
	int m = a;
	if (p < l && r <= l) m = a * 2;
	else if (p < r && l <= r) m = a * 2 + 1;
	if (m != a) {
		int pass = A[m];
		A[m] = p;
		A[a] = pass;
		func1(a / 2);
	}
}

void func2(int a) {
	if (a > h / 2) return;
	int p = A[a], l = A[a * 2], r = A[a * 2 + 1];
	int m = a;
	if (p < l && r <= l) m = a * 2;
	else if (p < r && l <= r) m = a * 2 + 1;
	if (m != a) {
		int pass = A[m];
		A[m] = p;
		A[a] = pass;
		func2(m);
	}
}

void insert(int k) {
	h++;
	A[h] = k;
	func1(h / 2);
}

void extract() {
	cout << A[1] << endl;
	A[1] = A[h];
	A[h] = INT_MIN;
	h--;
	func2(1);
}

int main() {
	Loop(i, 2000005) {
		A[i] = INT_MIN;
	}
	h = 0;
	string q;
	int k;
	while (1) {
		cin >> q;
		if (q == "end") break;
		else if (q == "insert") {
			cin >> k;
			insert(k);
		}
		else if (q == "extract") {
			extract();
		}
	}
	return 0;
}