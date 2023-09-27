#include <cstdio>
#include <algorithm>

using namespace std;
typedef long long lint;

int main()
{
	int N;
	
	while (scanf("%d", &N) && N){
		lint maxi = -0x3fffffffffffffll;
		lint dist = maxi;
		for (int i = 0; i < N; i++){
			lint x;
			scanf("%lld", &x);
			dist = max(dist + x, x);
			maxi = max(maxi, dist);
		}
		printf("%lld\n", maxi);
	}
	
	return (0);
}