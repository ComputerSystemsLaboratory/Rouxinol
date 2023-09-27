#include<iostream>
#include<utility>
using namespace std;

int insertionSort(int num[100], int N)
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (num[j] < num[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(num[min], num[i]);
			count++;
		}
	}
	return count;
}

int main(void)
{
	int N,num[100];
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	int count = insertionSort(num, N);

	for (int i = 0; i < N; i++)
	{
		cout << num[i];
		if (i != N - 1)
		{
			cout << " ";
		}
	}
	cout << endl << count << endl;

	return 0;
}