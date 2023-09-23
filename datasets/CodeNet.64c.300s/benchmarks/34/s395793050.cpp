#include <iostream>
#include <string>
using namespace std;
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
// ?????\?????????
void insertionSort(int *a, size_t n)
{
	for (int i = 1; i < n; i++)
	{
		Print(a, n);
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
	}
	
}

int main()
{
	int n;
	cin >> n;
	
	int *ary = new int[n];
	
	for (int i = 0; i < n; i++)
		cin >> ary[i];
	
	insertionSort(ary, n);
	Print(ary, n);
	
	delete[] ary;
	return 0;
}