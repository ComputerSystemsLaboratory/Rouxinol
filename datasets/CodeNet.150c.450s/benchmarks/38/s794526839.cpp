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
int main() {

		int N,A,B;
		cin >> N;
		vi a(N);
		vi b(N);
		vi c(N);
		for (int i = 0; i < N; i++) {
			cin >> a[i] >> b[i] >> c[i];
			A = min(a[i], b[i]);
			B = max(a[i], b[i]);
			if(B>c[i]){
				if (pow(B, 2) == pow(A, 2) + pow(c[i], 2)) {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
		}
			else {
				if (pow(c[i], 2) == pow(B, 2) + pow(A, 2)) {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}

	}

}