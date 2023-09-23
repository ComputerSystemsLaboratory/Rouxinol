#include <iostream>
using namespace std;

void bubbleSort(int num[], int N);
void swap(int& x, int& y);
void showArray(int num[], int N);

int main()
{
	int n;
	cin >> n;
	int *num = new int[n];
	for(int i = 0; i < n; i++)
		cin >> num[i];
	bubbleSort(num, n);
	return 0;
}

void bubbleSort(int num[], int N)
{
	int irekae = 0;
	for(int i = 1; i < N; i++)
		for(int j = 0; j < N-i; j++)
			if(num[j] > num[j+1])
			{
				swap(num[j], num[j+1]);
				irekae++;
			}
	showArray(num, N);
	cout << irekae << endl;
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void showArray(int num[], int N)
{
	cout << num[0];
	for(int i = 1; i < N; i++)
		cout << ' ' << num[i];
	cout << endl;
}