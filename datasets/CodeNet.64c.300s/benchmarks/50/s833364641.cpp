#include <iostream>
#include <string>
using namespace std;

void BubbleSort(int *a, size_t n, int *swapCount)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j-1])
			{
				int tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
				
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
	BubbleSort(a, n, &swapCount);
	Print(a, n);
	cout << swapCount << endl;
	return 0;
}