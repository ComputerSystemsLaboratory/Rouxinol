#include<iostream>
#include<algorithm>
using namespace std;

void maximumProfit()
{
	const int MAX = 200000;
	int R[MAX];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> R[i];
	}
	int mi = R[0];
	int ma = -2000000000;
	for (int i = 1; i < N; i++)
	{
		ma = max(ma, R[i] - mi);
		mi = min(mi, R[i]);
	}

	cout << ma << endl;
}

void insertionSort()
{
	const int LEN = 1000;
	int N;
	int A[LEN];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int k = 0; k < N; k++)
	{
		if (k == 0)
		{
			cout << A[k] << flush;
		}
		else
		{
			cout << " " << A[k] << flush;
		}
	}
	cout << endl;

	for (int i = 1; i < N; i++)
	{
		int j = i - 1;
		int v = A[i];
		while (j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;

		for (int k = 0; k < N; k++)
		{
			if (k == 0)
			{
				cout << A[k] << flush;
			}
			else
			{
				cout << " " << A[k] << flush;
			}
		}
		cout << endl;

	}

}

int main()
{
	//maximumProfit();
	insertionSort();
	return 0;
}