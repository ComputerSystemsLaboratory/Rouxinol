#include<iostream>
using namespace  std;

int main()
{
	int n;
	cin >> n;
	long long ans = 1;
	do
	{
		ans *= n;
	} while (--n);
	cout << ans << endl;
	return 0;
}