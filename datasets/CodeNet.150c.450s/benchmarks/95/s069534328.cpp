#include <stdio.h>
#include <string.h>

int n, r[101]; char c[3];

int main()
{
	while (true)
	{
		scanf("%d", &n);

		if (n == 0) break;

		memset(r, 0, sizeof(r));

		for (int i = 0; i < n; i++)
		{
			scanf("%s", &c);

			switch (c[1])
			{
				case 'u': r[i + 1] = r[i] + 1; break;
				case 'd': r[i + 1] = r[i] - 1; break;
			}
		}

		int ret = 0;

		for (int i = 2; i <= n; i++)
		{
			if (r[i - 2] == 0 && r[i] == 2) ret++;
			if (r[i - 2] == 2 && r[i] == 0) ret++;
		}

		printf("%d\n", ret);
	}

	return 0;
}