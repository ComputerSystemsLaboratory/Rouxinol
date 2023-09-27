#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
//#include "toollib.h"
#pragma warning (disable:4018)
using namespace std;

void swap_element(vector<int>* ary, int i, int j) {
	int pass;
	pass = (*ary)[i];
	(*ary)[i] = (*ary)[j];
	(*ary)[j] = pass;
}

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];
	cout << a[0];
	for (int k = 1; k < N; k++) cout << " " << a[k];
	cout << endl;

	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0; j--) {
			if (a[j - 1] > a[j]) swap_element(&a, j - 1, j);
			else break;
		}
		cout << a[0];
		for (int k = 1; k < N; k++) cout << " " << a[k];
		cout << endl;
	}
	return 0;
}