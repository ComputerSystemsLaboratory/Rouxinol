#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int f[50] = {1, 1};
	for (int i = 2; i <= n; ++i)
		f[i] = f[i - 1] + f[i - 2];
	cout << f[n] << endl;
}