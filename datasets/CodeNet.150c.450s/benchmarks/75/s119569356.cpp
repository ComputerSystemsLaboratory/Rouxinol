#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> arr;
int n;

void maxHeapify(int i) {
	int l = 2 * i;
	int r = 2 * i + 1;
	int large_idx = i;
	
	if (l <= n && arr[l] > arr[large_idx])
		large_idx = l;
	if (r <= n && arr[r] > arr[large_idx])
		large_idx = r;
	
	if (i != large_idx) {
		swap(arr[i], arr[large_idx]);
		maxHeapify(large_idx);
	}
}


int main()
{
	cin >> n;
	arr.resize(n + 1);
	for (int i = 1; i <= n; ++i)
		cin >> arr[i];
	for (int i = n / 2; i >= 1; --i)
		maxHeapify(i);
	for (int i = 1; i <= n; ++i)
		cout << " " << arr[i];
	cout << endl;

	return 0;
}
