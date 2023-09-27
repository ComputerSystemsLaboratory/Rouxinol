#include <iostream>
using namespace std;
#define MAX 100000
typedef long long llong;

int w[MAX];
int n, k;

int s1(llong P) {
	int j = 0;
	for ( int i = 0; i < k; i++ ) {
		llong s = 0;
		while ( s + w[j] <= P ) {
			s += w[j];
			j++;
			if ( j == n  ) return n;
		}
	}
	return j ;
}

llong s2() {
	llong left = 0;
	llong right = 100000 * 10000;
	llong  mid;
	while ( left < right - 1) {
		mid = (left + right)/2;
		llong P = mid;
		int i = s1(P);
		if ( i >= n) right = mid;
		else {
			left = mid;
		}
		//cout << P << endl;
	}
	return right;
}

int main() {
	cin >> n >> k;
	for ( int i = 0; i < n; i++ ) {
		cin >> w[i];
	}
	llong P = s2();
	cout << P << endl;
	return 0;
}
