#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	int a[200005];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maa = 0;
	int memo[200005];
	for (int i = n - 1; i!=0; i--)
	{
		maa = max(maa, a[i]);
		memo[i-1] = maa;
	}
	int ans = -1000000000;
	for (int i = 0; i < n-1; i++)
	{
		ans = max(memo[i] - a[i], ans);
	}
	cout << ans << endl;
	return 0;
}