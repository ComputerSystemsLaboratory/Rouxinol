#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int N, M;

	bool locked = true;

	cin >> N;

	vector<string> U(N);

	for (int i = 0; i < N; i++)
	{
		cin >> U[i];
	}

	cin >> M;

	vector<string> T(M);

	for (int i = 0; i < M; i++)
	{
		cin >> T[i];
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (T[i] == U[j])
			{
				goto Exit1;
			}
		}

		cout << "Unknown " << T[i] << endl;

		goto Exit2;

	Exit1:;

		if (locked == true)
		{
			locked = false;

			cout << "Opened by " << T[i] << endl;
		}
		else
		{
			locked = true;

			cout << "Closed by " << T[i] << endl;
		}

	Exit2:;
	}

	return 0;
}