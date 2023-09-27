/**
 * 	matrix chain multiplication
 * 	f(n,m) = multiply Mn*M(n+1)*...*M(m-1)*M(m)
 * 	f(n,n) = 1
 * 	r(n)=c(n-1)
 * 	f(n,n+1) = C(n) * R(n) * C(n+1) = c(n) * c(n-1) * c(n+1)
 * 	f(n,k,m) = f(n,k)*f(k+1,m)*C(n)*r(n)*c(k)
 * 	f(n,m) = min(f(n,k,m)
 */

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int r[100] = {0};
int a[100][100] = {0};

int f(int n, int m);
int f(int n, int k, int m);


int f(int n, int k, int m)
{
	return f(n,k) + f(k+1,m) + (r[n] * r[k+1] * r[m+1]);
}

int f(int n, int m)
{
	if (n==m) return 0;
	int & ra = a[n][m];
	if (ra) return ra;
	ra = INT_MAX;
	for (int k=n;k<m;k++)
	{
		int ans = f(n,k,m);
		if (ans < ra) ra = ans;
	}
	return ra;
}

int main()
{
	int rr = 0;
	int cc = 0;
	int n = 0;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> rr >> cc;
		r[i]=rr;
		r[i+1]=cc;
	}
	for (int i=0;i<n-1;i++)
	{
		a[i][i+1] = r[i] * r[i+1] * r[i+2];
	}
	int ans = f(0,n-1);
	cout << ans << endl;
}