#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	int maxn = -999999999,minn;
	cin >> n >> m;
	minn = m;
	for(int i = 1; i < n; ++i)
	{
		cin >> m;
		maxn = max(maxn,m-minn);
		minn = min(minn,m);
	}
	cout << maxn << endl;
	return 0;
}
