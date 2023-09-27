#include <iostream>
#include <vector>

using namespace std;

struct Card { char suit, value; };

void Output(vector<Card> A)
{
	for (int i = 0;i < A.size();i++)
	{
		if (i > 0)
			cout << " ";

		cout << A[i].suit << A[i].value;
	}

	cout << endl;
}

bool IsStable(vector<Card> C1, vector<Card> C2, int N)
{
	for (int i = 0;i < N;i++)
		if (C1[i].suit != C2[i].suit)
			return false;

	return true;
}

int main()
{
	int N;
	cin >> N;

	vector<Card> C1(N);
	vector<Card> C2(N);

	for (int i = 0;i < N;i++)
		cin >> C1[i].suit >> C1[i].value;

	// ?????????
	for (int i = 0;i < N;i++)
		C2[i] = C1[i];

	// ??????????????????
	for (int i = 0;i < N;i++)
	{
		for (int j = N - 1;j > i;j--)
		{
			if (C1[j - 1].value > C1[j].value)
				swap(C1[j - 1], C1[j]);
		}
	}

	// ???????????????
	for (int i = 0;i < N;i++)
	{
		int minj = i;
		for (int j = i;j < N;j++)
		{
			if (C2[j].value < C2[minj].value)
				minj = j;
		}

		swap(C2[i], C2[minj]);
	}


	// ???????????????????????????(????????????)
	Output(C1);
	cout << "Stable" << endl;

	// ????????????????????????
	Output(C2);
	cout << ((IsStable(C1, C2, N)) ? "Stable" : "Not stable") << endl;

	return 0;
}