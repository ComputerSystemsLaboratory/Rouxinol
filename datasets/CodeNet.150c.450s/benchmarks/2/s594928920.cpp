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
const int MAX = 100010;
int A[MAX];

int main(void)
{
	int n, x, k;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	x = A[n - 1];
	k = -1;
	for (int j = 0; j < n; j++) {
		if (A[j] <= x) {
			k++;
			swap(A[k], A[j]);
		}
	}
	//swap(A[k + 1], A[n - 1]);
	for (int i = 0; i < n; i++) {
		if (i)
			cout << " ";
		if (i == k)
			cout << '[' << A[i] << ']';
		else
			cout << A[i];
	}
	cout << endl;
	return 0;
}
