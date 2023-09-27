#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#include<functional>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

typedef pair<int, int> pii;

using namespace std;

int a[100000];

int main()
{
	fill(a, a + 100000, 0);

	int n, q;
	cin >> n >> q;

	for (int i = 0; i < q; i++)
	{
		int c, x, y;
		cin >> c >> x >> y;

		switch (c)
		{
		case 0:
			a[x] += y;
			break;
		case 1:
		{
			int sum = a[x];
			for (int j = x + 1; j <= y; j++)
			{
				sum += a[j];
			}
			cout << sum << endl;
		}
			break;
		}
	}

	return 0;
}


