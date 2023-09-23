#include <cstdio>
#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i=0; i<n; i++)
#define REP(n) rep(i,n)
typedef long long ll;
using namespace std;

int n;
ll A[30];
int year[30];

signed main()
{
	A[0] = 1; A[1] = 2; A[2] = 4;
	year[0] = 1; year[1] = 1; year[2] = 1;
	
	for (int i=3; i<30; i++)
	{
		A[i] = A[i-1] + A[i-2] + A[i-3];
		if (A[i] % 3650 > 0) year[i] = A[i] / 3650 + 1;
		else year[i] = A[i] / 3650;
	}
	
	while (cin >> n, n)
	{
		printf("%d\n", year[n-1]);
	}
	
	return 0;
}