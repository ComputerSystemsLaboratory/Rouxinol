#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, ans[2];
	for (int i = 0; i < 2; i++)
	{
		cin >> a >> b >> c >> d;
		ans[i] = a + b + c + d;
	}
	if (ans[0] > ans[1])
	{
		cout << ans[0] << endl;
	}
	if (ans[0] < ans[1])
	{
		cout << ans[1] << endl;
	}
	if (ans[0] == ans[1])
	{
		cout << ans[0] << endl;
	}
}