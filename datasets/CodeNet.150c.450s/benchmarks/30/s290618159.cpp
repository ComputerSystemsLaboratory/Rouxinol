#include <iostream>
#include <algorithm>

using namespace std;

void SelectionSort()
{
	int N;
	int a[100] = {0};
	int count = 0;

	int min;
	int minIndex;

	cin>>N;

	for (int i = 0; i < N; i++)
	{
		cin>>a[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		min = a[i];
		minIndex = i;

		for (int j = i + 1; j < N; j++) 
		{
			if (min > a[j])
			{
				min = a[j];
				minIndex = j;
			}
		}

		if (minIndex != i)
		{
			a[minIndex] = a[i];
			a[i] = min;
			count++;
		}
		

	}

	for(int i  = 0; i < N - 1; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[N - 1]<<endl;
	cout<<count<<endl;
}

int main()
{
	SelectionSort();
	return 0;
}