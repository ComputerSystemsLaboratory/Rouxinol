#include <iostream>
using namespace std;
void A()
{
	int S[10000];
	int T[500];
	int N;
	int Q;
	int C = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> T[i];
	}

	for (int i = 0; i < Q; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (T[i] == S[j])
			{
				C++;
				break;
			}
		}
	}

	cout << C << endl;
}

int main()
{
	A();
	return 0;
}