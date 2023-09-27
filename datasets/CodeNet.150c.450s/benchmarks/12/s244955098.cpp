#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>

using namespace std;

const double PI = 3.14159265358979;


int main() {

	int n;  cin >> n;
	
	long long* heap = new long long[n + 1];

	for (int i = 1; i <= n; i++)	{
		scanf("%lld", &heap[i]);
	}

	for (int i = 1; i <= n; i++)	{
		//node 2: key = 8, parent key = 7, left key = 2, right key = 3, 
		long long node = i;
		long long key = heap[i];
		long long parent_key = i == 1 ? INT_MAX : heap[i / 2];
		long long left_key = i * 2 <= n ? heap[i * 2] : INT_MAX;
		long long right_key = (i * 2 + 1) <= n ? heap[i * 2 + 1] : INT_MAX;

		
		printf("node %lld: key = %lld, ", node, key);
		if (parent_key != INT_MAX) printf("parent key = %lld, ", parent_key);
		if (left_key != INT_MAX) printf("left key = %lld, ", left_key);
		if (right_key != INT_MAX) printf("right key = %lld, ", right_key);
		printf("\n");
	}

	delete[] heap;
	

	return 0;
}

