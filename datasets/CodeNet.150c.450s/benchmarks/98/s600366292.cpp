#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	int taro[100];
	int hanako[100];
	while (cin >> n >> m && n != 0 && m != 0)
	{
		int taroSum = 0;
		int hanakoSum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> taro[i];
			taroSum += taro[i];
		}

		sort(taro, taro + n);

		for (int i = 0; i < m; i++)
		{
			cin >> hanako[i];
			hanakoSum += hanako[i];
		}

		sort(hanako, hanako + m);
		bool flag = false;
                int sum = 11451419;
		int minTaro = taro[n - 1];
		int minHanako = hanako[m - 1];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (taroSum + hanako[j] - taro[i] == hanakoSum + taro[i] - hanako[j] && taro[i] + hanako[j] < sum )
				{
					minTaro = taro[i];
					minHanako = hanako[j];
                                        sum = minTaro + minHanako;
					flag = true;
				}
			}
		}

		if (flag)
		{
			cout << minTaro << " " << minHanako << endl;
		}
		else
		{
			cout << -1 << endl;
		}

	}
	return 0;
}