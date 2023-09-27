#include <iostream>
#include <vector>

using namespace std;

void trace(vector<int> a, int n)
{
	for (int i = 0;i < n;i++)
	{
		if (i > 0)cout << " ";
		cout << a[i];
	}
	cout << endl;
}

int bubbleSort(vector<int> A,int N)
{
	int swapv = 0;
	bool f = true;
	for (int i = 0;f;i++)
	{
		f = false;
		for (int j = N - 1;j >= i + 1;j--)
		{
			if (A[j] < A[j - 1])
			{
				swap(A[j], A[j - 1]);
				swapv++;
				f = true;
			}
		}
	}
	trace(A, N);

	return swapv;
}

int main()
{
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0;i < N;i++)
		cin >> A[i];

	int sw = bubbleSort(A, N);

	cout << sw << endl;

	return 0;
}