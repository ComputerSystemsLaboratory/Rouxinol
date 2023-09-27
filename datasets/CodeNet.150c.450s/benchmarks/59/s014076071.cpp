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


void insertionSort(vector<int> a, int n)
{
	int j, v;
	for (int i = 1;i < n;i++)
	{
		v = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > v)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
		trace(a, n);
	}
}

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0;i < N;i++)
		cin >> A[i];

	trace(A, N);
	insertionSort(A, N);
		

	return 0;
}