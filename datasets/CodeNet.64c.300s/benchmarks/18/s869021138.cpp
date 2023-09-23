#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	long long sum[31] = {0};
	
	sum[0] = 1;
	
	for(int i = 1; i < 31; ++i) {
		
		sum[i] = 0;
		if(i - 1 >= 0)
			sum[i] += sum[i - 1];
		if(i - 2 >= 0)
			sum[i] += sum[i - 2];
		if(i - 3 >= 0)
			sum[i] += sum[i - 3];
	}
	
	while(true) {
		
		int n;
		
		scanf("%d", &n);
		if(n == 0)
			break;
		
		printf("%lld\n", (sum[n] - 1LL) / 3650LL + 1LL);
	}
	
	return 0;
}