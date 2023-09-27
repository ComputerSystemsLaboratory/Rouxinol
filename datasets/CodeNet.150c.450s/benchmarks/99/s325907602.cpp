#include <cctype>
#include <string>
#include <iostream>

#pragma warning(disable : 4996)

using namespace std;

int n; string S, T;

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		cin >> S >> T;

		int s = 0, t = 0;

		int pos = 0;

		while (pos < S.size())
		{
			int mult = 1;

			if (isdigit(S[pos]))
			{
				mult = S[pos] - 48; pos++;
			}

			switch (S[pos])
			{
			case 'm': s += mult * 1000; break;
			case 'c': s += mult * 100; break;
			case 'x': s += mult * 10; break;
			case 'i': s += mult * 1; break;
			}

			pos++;
		}

		pos = 0;

		while (pos < T.size())
		{
			int mult = 1;

			if (isdigit(T[pos]))
			{
				mult = T[pos] - 48; pos++;
			}

			switch (T[pos])
			{
			case 'm': t += mult * 1000; break;
			case 'c': t += mult * 100; break;
			case 'x': t += mult * 10; break;
			case 'i': t += mult * 1; break;
			}

			pos++;
		}

		t += s;

		int r = 1000;

		while (r > 0)
		{
			if (t / r)
			{
				if ((t / r) != 1)
				{
					printf("%d", t / r);
				}

				switch (r)
				{
				case 1000: printf("m"); break;
				case 100: printf("c"); break;
				case 10: printf("x"); break;
				case 1: printf("i"); break;
				}
			}

			t = t % r; r /= 10;
		}

		printf("\n");
	}

	return 0;
}