#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, N[50];
	N[0] = N[1] = 1;
	cin >> n;

	for (int i = 2; i <= n; i++)
		N[i] = N[i - 1] + N[i - 2];

	cout << N[n]<<endl;
	return 0;
}
