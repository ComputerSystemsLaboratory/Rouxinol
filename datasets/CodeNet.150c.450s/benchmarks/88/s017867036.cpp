#include <iostream>

using namespace std;

int main()
{
	int h, w, c, AnswerH[1000], AnswerW[1000];

	c = 0;

	while (true)
	{
		cin >> h >> w;

		if (h == 0 && w == 0) { break; }

		for (int s = 0; s < 20000; s++)
		{
			for (int i = 1; i <= 142; i++)
			{
				if (s == 0 && i == 1) { i = h + 1; }

				for (int j = 1; j <= 142; j++)
				{
					if (i * i + j * j == h * h + w * w + s && i < j)
					{
						AnswerH[c] = i;
						AnswerW[c] = j;

						goto Exit;
					}
				}
			}
		}

	Exit:;

		c++;
	}

	for (int i = 0; i < c; i++)
	{
		cout << AnswerH[i] << ' ' << AnswerW[i] << endl;
	}

	return 0;
}