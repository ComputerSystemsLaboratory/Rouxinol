#include <iostream>
using namespace std;

void selectionSort(int num[], int N);
void swap(int& x, int& y);
void showArray(int num[], int N);

int main()
{
	int n;
	cin>>n;
	int *num = new int[n];
	for(int i = 0; i < n; i++)
		cin>>num[i];
	selectionSort(num, n);
	return 0;
}

void selectionSort(int num[], int N)
{
	int irekae = 0, min;
	for(int i = 0; i<N-1; i++)
	{
		min = i;
		for(int j = i+1; j < N; j++)
			if(num[j]<num[min])
				min = j;
		if(min != i)
		{
			swap(num[i], num[min]);
			irekae++;
		}
	}
	showArray(num, N);
	cout<<irekae<<endl;
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void showArray(int num[], int N)
{
	cout<<num[0];
	for(int i = 1; i < N; i++)
		cout<<' '<<num[i];
	cout<<endl;
}