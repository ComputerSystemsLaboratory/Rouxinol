#include <iostream>
#include <string>
using namespace std;

inline void Swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void SelectionSort(int *a, size_t n, int *swapCount)
{
	int minj;
	for (int i = 0; i < n -1; i++)
	{
		minj = i;
		for (int j = i; j < n; j++)
		{
			if (a[j] < a[minj])
				minj = j;
		}
		
		if (i != minj)
		{
			Swap(&a[i], &a[minj]);
			//cout << "swap: a[" << i << "]=" << a[i] << ",a[" << minj << "]=" << a[minj] << endl;
			(*swapCount)++;
		}
	}
}

void Print(int *a, size_t n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (i == n-1)
			cout << endl;
		else
			cout << " ";
	}
}
int main()
{
	int swapCount = 0;
	int a[100] = {0};
	int n;
	
	cin >> n;
	
	int v;
	for (int i = 0; i < n; i++)
	{
		cin >> v;
		a[i] = v;
	}
	SelectionSort(a, n, &swapCount);
	Print(a, n);
	cout << swapCount << endl;
	return 0;
}