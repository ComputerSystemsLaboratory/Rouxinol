#include <iostream>
#include <cstdio>
using namespace std;
const int N = 100005;
int partition(int arr[], int p, int r)	//[p, r)????????????,????????????pivot??????
{
	int pivot = arr[r - 1];
	int i = p;
	for (int j = p; j < r - 1; ++j)
	{
		if (arr[j] <= pivot)
		{
			swap(arr[i++], arr[j]);
		}
	}
	swap(arr[i], arr[r - 1]);
	return i;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int arr[N];
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	int idx = partition(arr, 0, n);
	for (int i = 0; i < idx; ++i)
	{
		if (i > 0)
			cout << ' ';
		cout << arr[i];
	}
	cout << ' ' << '[' << arr[idx] << ']';
	for (int i = idx + 1; i < n; ++i)
		cout << ' ' << arr[i];
	cout << endl;
	return 0;
}