#include <iostream>
#include <algorithm>
using namespace std;

long n, m = 1;
long a[100001], b[100001];
const long INF = 1000000001;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for(int i = 0; i < n + 1; i++)
		b[i] = INF;

	for (int i = 0; i < n; i++)
		*lower_bound(b, b + n, a[i]) = a[i];

	cout << lower_bound(b, b + n, INF) - b << endl;

	return 0;
}
