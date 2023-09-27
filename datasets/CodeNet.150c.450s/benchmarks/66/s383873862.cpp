#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	int N,M;
	char U[256][11];
	char T[11];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> U[i];
	}
	cin >> M;
	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		bool find = false;
		cin >> T;

		for (int j = 0; j < N; j++)
		{
			int c = strcmp(U[j], T);
			if (c == 0)
			{
				find = true;
				cnt++;
				break;
			}
		}

		if (find)
		{
			if (cnt % 2== 1)
			{
				cout << "Opened by "<< T << endl;
			}
			else
			{
				cout << "Closed by " << T << endl;
			}
		}
		else
		{
			cout << "Unknown " << T << endl;
		}
	}
	return 0;
}