#include <cstring>
#include <iostream>

using namespace std;

const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

const char dir[5] = "NESW";

int N, M, D, X, Y, JX[20], JY[20], P[21][21];

char c;

int main()
{
	while (true)
	{
		cin >> N;

		if (N == 0) { break; }

		X = 10; Y = 10;

		memset(P, 0, sizeof(P));

		P[X][Y] = 1;

		for (int i = 0; i < N; i++)
		{
			cin >> JX[i] >> JY[i];
		}

		cin >> M;

		for (int i = 0; i < M; i++)
		{
			cin >> c >> D;

			for (int j = 0; j < 4; j++)
			{
				if (c == dir[j])
				{
					for (int k = 0; k < D; k++)
					{
						X += dx[j];
						Y += dy[j];

						P[X][Y] = 1;
					}
				}
			}
		}

		int A = 0;

		for (int i = 0; i < N; i++)
		{
			A += P[JX[i]][JY[i]];
		}

		printf("%s\n", A == N ? "Yes" : "No");
	}

	return 0;
}