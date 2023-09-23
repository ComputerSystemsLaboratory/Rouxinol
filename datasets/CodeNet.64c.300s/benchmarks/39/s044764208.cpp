#include<stdio.h>
#include<math.h>

int main()
{
	int n, a, b, c, d, cnt = 0;
	while (scanf("%d", &n) != EOF)
	{
		cnt = 0;
		if (n > 36)
		{
			printf("0\n");
			continue;
		}
		for (a = 0; a < 10; a++)
		{

			if (n - a>27)continue;

			for (b = a; b < 10; b++)
			{
				if (n - a - b > 18)continue;

				for (c = b; c < 10; c++)
				{
					if (n - a - b - c > 9)continue;

					for (d = c; d < 10; d++)
					{

						if (a + b + c + d == n)
						{
							if ((a == b) && (a == c) && (a == d))cnt++;
							else if (((a == b) && (b == c)) | ((b == c) && (c == d)))cnt += 4;
							else if ((a == b) && (c == d))cnt += 6;
							else if ((a == b) | (b == c) | (c == d))cnt += 12;
							else cnt += 24;
						}
					}
				}
			}
		}

		printf("%d\n", cnt);
	}
}