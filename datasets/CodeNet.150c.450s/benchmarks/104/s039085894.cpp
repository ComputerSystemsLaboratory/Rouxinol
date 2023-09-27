#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int w, n;
	int a, b;
	
	scanf("%d%d", &w, &n);

	vector<int> num(w + 1);

	for (int i = 1; i <= w; i++){
		num[i] = i;
	}

	for (int i = 0; i < n; i++){
		scanf("%d,%d", &a, &b);
		swap(num[a], num[b]);
	}

	for (int i = 1; i <= w; i++){
		printf("%d\n", num[i]);
	}

	return (0);
}