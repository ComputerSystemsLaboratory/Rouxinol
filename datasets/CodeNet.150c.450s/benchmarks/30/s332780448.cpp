#include<iostream>
using namespace std;

int main()
{
	int arr[100],n,cnt=0,min_i;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		min_i = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[min_i] > arr[j])min_i = j;
		}
		if (min_i != i)
		{
			swap(arr[min_i], arr[i]);
			cnt++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i != n - 1)cout << " ";
	}
	cout << endl << cnt << endl;
	return 0;
}