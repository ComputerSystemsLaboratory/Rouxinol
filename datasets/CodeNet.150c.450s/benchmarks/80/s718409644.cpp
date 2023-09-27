#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, i;
	int sum_a, sum_b;
	
	sum_a = sum_b = 0;
	
	for (i = 0; i < 4; i++){
		scanf("%d", &a);
		sum_a += a;
	}
	for (i = 0; i < 4; i++){
		scanf("%d", &b);
		sum_b += b;
	}
	
	printf("%d\n", max(sum_a, sum_b));
	
	return (0);
}