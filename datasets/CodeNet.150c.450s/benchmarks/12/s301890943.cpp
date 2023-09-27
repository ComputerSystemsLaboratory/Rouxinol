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

int main()
{
	int num; cin >> num;
	vector<int> data(num);
	for (int i = 0; i < num; ++i) cin >> data[i];

	for (int i = 0; i < num; ++i)
	{
		printf("node %d: key = %d, ", i + 1, data[i]);

		int idxP = (i + 1) / 2;
		if (idxP > 0) printf("parent key = %d, ", data[idxP - 1]);

		int idxL = (i + 1) * 2;
		int idxR = (i + 1) * 2 + 1;
		if (idxL <= num) printf("left key = %d, ", data[idxL - 1]);
		if (idxR <= num) printf("right key = %d, ", data[idxR - 1]);
		
		cout << endl;
	}

	return 0;
}