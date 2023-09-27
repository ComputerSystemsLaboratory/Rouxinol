#include <iostream>

using namespace std;

int main()
{
	const int kNumBuilding = 4;
	const int kNumFloor = 3;
	const int kNumRoom = 10;

	int numResidents[kNumBuilding][kNumFloor][kNumRoom] = {0};

	int numInfo;
	cin >> numInfo;

	int b, f, r, v;
	for(int i = 0; i < numInfo; i++)
	{
		cin >> b >> f >> r >> v;
		numResidents[b - 1][f - 1][r - 1] += v;
	}

	for(int i = 0; i < kNumBuilding; i++)
	{
		if(i != 0)
		{
			cout << "####################" << endl;
		}
		for(int j = 0; j < kNumFloor; j++)
		{
			for(int k = 0; k < kNumRoom; k++)
			{
				cout << ' ' << numResidents[i][j][k];
			}
			cout << endl;
		}
	}

	return 0;
}