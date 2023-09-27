#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
//#include "toollib.h"
//#include "puzzle.h"
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#pragma warning (disable:4018)
#pragma warning (disable:4244)

using namespace std;
typedef long long int lint;


//***** Main Program *****

bool compare(pair<char, int> a, pair<char, int>b) {
	if (a.second < b.second) return true;
	else return false;
}

int main() {
	int N;
	cin >> N;
	vector<pair<char, int>> A(N), B(N);
	Loop(i, N) cin >> A[i].first >> A[i].second;
	B = A;
	//bubble
	Loop(i, N) {
		for (int j = N - 1; j >= i + 1; j--) {
			if (compare(A[j], A[j - 1])) {
				pair<char, int> pass = A[j];
				A[j] = A[j - 1];
				A[j - 1] = pass;
			}
		}
	}
	cout << A[0].first << A[0].second;
	for (int i = 1; i < N; i++) cout << " " << A[i].first << A[i].second;
	cout << endl << "Stable" << endl;
	//Selection
	Loop(i, N) {
		int a = i;
		for (int j = i; j < N; j++) {
			if (compare(B[j], B[a])) a = j;
		}
		if (a != i) {
			pair<char, int> pass = B[i];
			B[i] = B[a];
			B[a] = pass;
		}
	}
	cout << B[0].first << B[0].second;
	for (int i = 1; i < N; i++) cout << " " << B[i].first << B[i].second;
	cout << endl;
	bool judge = true;
	Loop(i, N) {
		if (A[i] != B[i]) {
			judge = false;
			break;
		}
	}
	if (judge) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	return 0;
}