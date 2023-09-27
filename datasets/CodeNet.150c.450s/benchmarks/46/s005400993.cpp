#include <iostream>
using namespace std;

int solve(int n, int x);

int main() {
	int n, x;
	while (cin >> n >> x){
		if (n == 0 && x ==0) break;
		cout << solve(n, x) << endl;
	}
	return 0;
}

int solve(int n, int x){
	int counter = 0;
	for (int i=1; i!= n-1; ++i){
		for (int j=i+1; j<x-i; ++j){
			int k = x - i - j;
			if (k <= j) break;
			if (3 <= k && k <= n && k != j && k!= i){
				++counter;
			}
		}
	}
	return counter;
}