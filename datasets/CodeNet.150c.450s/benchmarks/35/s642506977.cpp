#include <iostream>
#include <vector>
using namespace std;

int a[5000];
bool flg[5000];
vector<int> vec;

int sum(int i, int j);

int main()
{
	int n, i, j, k, l, s, max;

	while (cin >> n)
	{
		if (n == 0) break;

		for (i = 0; i < n; i++)
			cin >> a[i];

		max = -2147483647;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
				if ((s = sum(i, j)) > max)
					max = s;
			vec.clear();
			flg[i] = false;
		}
		cout << max << endl;
	}
	return 0;
}

int sum(int a, int b)
{
	int tmp;
	if (!flg[a])
	{
		vec.push_back(::a[a]);
		flg[a] = true;
	}
	if (b-a-1 >= 0)
	{
		vec.push_back(vec[b-a-1]+::a[b]);
	}
		return vec.back();
}