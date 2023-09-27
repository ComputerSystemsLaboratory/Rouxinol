#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
using namespace std;

typedef long long llong;
const int MAX = 2000001;
int C[10010], A[MAX], B[MAX];

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		C[A[i]]++;
	}
	for (int i = 1; i < 10001; i++)
		C[i] = C[i] + C[i - 1];
	for (int i = n - 1; i >= 0; i--) {
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
	for (int i = 1; i <= n; i++) {
		if (i - 1)
			cout << " ";
		cout << B[i];
	}
	cout << endl;
	return 0;
}
