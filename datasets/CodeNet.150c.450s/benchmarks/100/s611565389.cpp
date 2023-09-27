#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	if(n == 1)
	{
		cout << 1 << endl;
		return;
	}
	vector<int> a(1000);
	for(int i = 1; i < 1000; ++i)
	{
		a[i] = 0;	
	}
	a[0] = 1;

	for(int i = 2; i <= n; ++i)
	{
		int buf = 0;
		for(int j = 0; j < a.size() - 1; ++j)
		{
			int temp = 0;
			temp = a[j] * i + buf;
			buf = temp / 10;
			a[j] = temp % 10;
		}
	}
	reverse(a.begin(), a.end());
	bool flag = false;
	for(int b = 0; b < a.size(); ++b)
	{
		if(a[b] != 0)
		{
			flag = true;
		}
		if(flag)
		{
			cout << a[b];
		}
	}
	cout << endl;
}

int main()
{
	solve();
	return(0);
}