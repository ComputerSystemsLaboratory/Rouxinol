#include <cstdio>
#include <cmath>
using namespace std;


int main (void)
{
	int d;
	long long sum=0;
	int n, min=1000001, max=-1000001, i;

	scanf("%d", &n);


	for (i=0; i<n; i++){
		scanf("%d", &d);
		sum += d;
		if (min > d)
			min = d;
		if (max < d)
			max = d;
	}

	printf("%d %d %ld\n", min, max, sum);

	return 0;
}