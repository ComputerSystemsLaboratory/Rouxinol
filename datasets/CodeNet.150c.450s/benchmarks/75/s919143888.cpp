#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
const int maxx = 200000;

int main()
{
	int n, k;
	vector<int> ve;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &k);
		ve.push_back(k);
	}

	make_heap(ve.begin(), ve.end());
	
	for (vector<int>::iterator it = ve.begin(); it != ve.end(); it++)
		printf(" %d", *it);
	printf("\n");
	return 0;
}