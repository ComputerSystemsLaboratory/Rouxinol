#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int D[1000];
int n;
void insertion_sort(int D[],int n){
	for (int k = 0; k < n; k++) {
		if (k == n - 1) {
			cout << D[k] << endl;
		}
		else {
			cout << D[k] << " ";
		}
	}
	for (int i = 1; i < n; i++) {
		int tmp = D[i];
		int j = i-1;
		while (j >= 0 && D[j] > tmp) {
			D[j+1] = D[j];
			j--;
		}
		D[j+1] = tmp;
		for (int k = 0; k < n; k++) {
			if (k == n - 1) {
				cout << D[k] << endl;
			}
			else {
				cout << D[k] << " ";
			}
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> D[i];
	}
	insertion_sort(D, n);
}