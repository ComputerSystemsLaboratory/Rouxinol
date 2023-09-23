#include <iostream>
using namespace std;

void InsertionSort(int num[], int N);
void showArray(int num[], int N);

int main()
{
	int n;
	cin >> n;
	int *num = new int [n];
	for(int i = 0; i < n; i++)
		cin >> num[i];
	InsertionSort(num, n);
	return 0;
}

void InsertionSort(int num[], int N)
{
	for(int i = 1; i<N; i++)
	{
		int temp = num[i];
		int j;
		showArray(num, N);
		for(j = i; j > 0 && num[j-1] > temp; j--)
			num[j] = num[j-1];
		num[j] = temp;
	}
	showArray(num, N);
}

void showArray(int num[], int N)
{
	cout << num[0];
	for(int i = 1; i < N; i++)
		cout << ' ' << num[i];
	cout << endl;
}