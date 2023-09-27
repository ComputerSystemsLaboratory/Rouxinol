#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	long long int ans = 0;
	cin >> n;
	if (n)ans++;
	for (int i = 1; i <= n; i++)
	{
		ans *= i;
	}
	cout << ans<<endl;
}