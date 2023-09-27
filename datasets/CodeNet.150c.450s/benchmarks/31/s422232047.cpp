#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <cctype>
using namespace std;
#define _USE_MATH_DEFINES

int a[200000];
int main() {
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	long long min_val = 1e15;
	long long max_diff = -1e15;
	for (int i = 0; i < N; i++) {

		if (a[i] - min_val > max_diff) {
			max_diff = a[i] - min_val;
		}
		if (a[i] < min_val) {
			min_val = a[i];
		}
	}
	cout << max_diff << endl;
}