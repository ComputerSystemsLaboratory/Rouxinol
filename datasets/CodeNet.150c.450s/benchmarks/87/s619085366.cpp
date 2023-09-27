#include <vector>
#include <iostream>

#pragma warning(disable : 4996)

using namespace std;

int main()
{
	int H;

	while (true)
	{
		scanf("%d", &H);

		if (H == 0) { break; }

		vector<vector<int> > M(H, vector<int>(5));

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				scanf("%d", &M[i][j]);
			}
		}

		int ret = 0;

		while (true)
		{
			for (int i = 0; i < H; i++)
			{
				for (int j = 5; j >= 3; j--)
				{
					for (int k = 0; k <= 5 - j; k++)
					{
						bool ok = (M[i][k] != 0);

						for (int l = k + 1; l < k + j; l++)
						{
							if (M[i][l - 1] != M[i][l] || M[i][l] == 0)
							{
								ok = false;
							}
						}

						if (ok)
						{
							ret += M[i][k] * j;

							for (int l = k; l < k + j; l++)
							{
								M[i][l] = 0;
							}
						}
					}
				}
			}

			bool ok = false;

			for (int rep = 0; rep < H; rep++)
			{
				for (int i = H - 1; i >= 1; i--)
				{
					for (int j = 0; j < 5; j++)
					{
						if (M[i][j] == 0 && M[i - 1][j] != 0)
						{
							M[i][j] = M[i - 1][j]; M[i - 1][j] = 0; ok = true;
						}
					}
				}
			}

			if (!ok) { break; }
		}

		printf("%d\n", ret);
	}

	return 0;
}