#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
#include <cmath>

using namespace std;

#define INF 10000001

int main()
{
	int a, n;
	int maxi, mini;
	int i;
	long long sum = 0ll;

	mini = INF;
	maxi = -10000001;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		maxi = max(a, maxi);
		mini = min(a, mini);
		sum += a;
	}

	printf("%d %d ", mini, maxi);
	cout << sum << endl;
	
	return (0);
}