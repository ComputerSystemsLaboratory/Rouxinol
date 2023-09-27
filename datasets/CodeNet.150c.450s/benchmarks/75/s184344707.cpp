#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <stack>
#include <queue>

#define INT_MAX 2147483647
#define INT_MIN -2147483647

using namespace std;

void maxHeap(vector<int> &data, int idx)
{
	int l = idx * 2;
	int r = idx * 2 + 1;

	int maxIdx;
	maxIdx = (l<data.size() && data[l] > data[idx]) ? l : idx;
	maxIdx = (r<data.size() && data[r] > data[maxIdx]) ? r : maxIdx;

	if (maxIdx != idx)
	{
		swap(data[idx], data[maxIdx]);
		maxHeap(data, maxIdx);
	}
}

int main()
{
	int num; cin >> num;
	vector<int> data(num + 1);
	for (int i = 1; i <= num; ++i) cin >> data[i];
	
	for (int i = num; i > 0; --i) 
		maxHeap(data, i);

	for (int i = 1; i <= num; ++i) cout << " " << data[i];
	cout << endl;
}