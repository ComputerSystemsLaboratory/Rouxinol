#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

#define INT_MAX 2147483647
#define INT_MIN -2147483647
using namespace std;

int main()
{
	int num;
	int vals[100];
	cin >> num;
	int idx = 0;
	while (cin >> vals[idx++]);

	int count = 0;
	for (int i = 0; i < num-1; ++i)
	{
		int minIdx = i;
		for (int j = i; j < num; ++j)
		{
			if (vals[j] < vals[minIdx])
				minIdx = j;
		}
		count += (i != minIdx);
		swap(vals[i], vals[minIdx]);
	}
	for (int i = 0; i < num-1; ++i) cout << vals[i] << " ";
	cout << vals[num - 1] << endl;
	cout << count << endl;
	return 0;
}