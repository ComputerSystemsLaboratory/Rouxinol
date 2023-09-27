#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n, a[1000], min, temp;

	while (true)
	{
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}

		min = 1000000;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (j == i)
				{
					continue;
				}

				temp = abs(a[i] - a[j]);
				min = min > temp ? temp : min;
			}
		}

		printf("%d\n", min);
	}
}
