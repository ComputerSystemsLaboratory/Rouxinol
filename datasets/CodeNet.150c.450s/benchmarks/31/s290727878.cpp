#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int array[200000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}

	int max_t = array[1] - array[0];
	int min_t = array[0];

	for (int i = 1; i < n; i++){
		max_t = max(max_t, array[i] - min_t);
		min_t = min(min_t, array[i]);
	}

	cout << max_t << endl;

	return (0);
}