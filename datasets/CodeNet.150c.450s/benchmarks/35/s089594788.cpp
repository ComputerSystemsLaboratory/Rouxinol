#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int sum[5001] = {};
	while (cin >> n, n)
	{
		//累積和の配列を作る
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			sum[i + 1] = sum[i] + a;
		}

		//さっき作った配列の中から最大値を選ぶ
		int ret = sum[1];
		for (int i = 0; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				ret = max(ret, sum[j] - sum[i]);
			}
		}
		cout << ret << endl;
	}
}
