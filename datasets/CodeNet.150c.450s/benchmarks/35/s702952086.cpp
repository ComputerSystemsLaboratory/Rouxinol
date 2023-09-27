#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	for (; ;)
	{
		int n;
		cin >> n;

		if (n == 0)
		{
			break;
		}

		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a.at(i));
		}

		int maxv = a.at(0);
		vector<int> sum;
		sum.push_back(0);
		for (int i = 0; i < n; i++)
		{
			int s = sum.back() + a.at(i);
			sum.push_back(s);


			for (int j = 0; j < sum.size() - 1; j++)
			{
				int x = sum.back() - sum.at(j);
				maxv = max(maxv, x);
			}
		}

		cout << maxv << endl;
	}
}
