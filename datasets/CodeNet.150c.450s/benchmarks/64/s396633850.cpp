#include <iostream>
#include <cstdio>
#include <cmath>
#include <numeric>
#include <algorithm>
using namespace std;

long dict[1048576] = {};

void makeDict(long A[], long n){
	for (long i = 0; i < pow(2, n); i++){
		dict[i] += (i % 2) * A[0];
		for (long j = 1; j < n; j++){
			dict[i] += (fmod(i, pow(2, j + 1)) - fmod(i, pow(2, j))) / pow(2, j) * A[j];
		}
	}
}

int main(){
	long n, q, A[20], m[200];
	cin >> n;
	for (long i = 0; i < n; i++) cin >> A[i];
	makeDict(A, n);
	int p = pow(2, n);
	sort(dict, dict + p);
	cin >> q;
	for (long i = 0; i < q; i++){
		cin >> m[i];
		if (binary_search(dict, dict + p, m[i])) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}