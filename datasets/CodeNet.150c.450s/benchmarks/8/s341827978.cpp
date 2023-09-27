#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	int n;
	int tp = 0, hp = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		string t, h;
		cin >> t >> h;

		for (int j = 0;; j++)
		{
			if (j == t.size() && j == h.size())
			{
				tp++;
				hp++;
				break;
			}
			else
			{
				if (j == t.size())
				{
					hp += 3;
					break;
				}
				else if (j == h.size())
				{
					tp += 3;
					break;
				}
			}
			if (t[j] == h[j])
			{
				continue;
			}
			if (t[j] > h[j])
			{
				tp += 3;
				break;
			}
			else
			{
				hp += 3;
				break;
			}
		}
	}

	cout << tp << " " << hp << endl;
	return 0;
}