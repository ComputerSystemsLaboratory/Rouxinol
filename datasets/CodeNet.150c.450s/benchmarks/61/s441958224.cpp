#include<iostream>
using namespace std;

int main()
{
	int N, A, B, C, X;
	int Y[100] = {};
	while (true)
	{
		cin >> N >> A >> B >> C >> X;
		if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0)break;
		for (int i = 0; i < N; i++)
		{
			cin >> Y[i];
		}
		int frame = 0;
		int index = 0;
		while (frame <= 10000)
		{
			if (X == Y[index])
			{
				index++;
			}
			if (index > N - 1)
			{
				break;
			}
			X = (A * X + B) % C;
			frame++;
		}

		if (frame > 10000)
		{
			frame = -1;
		}


		cout << frame << endl;
	}
	return 0;
}