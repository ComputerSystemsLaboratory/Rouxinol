#include <iostream>
using namespace std;

typedef long long ll;
const ll INF = 1000000000;

int main()
{
	ll t, n;
	while( 1 )
	{
		scanf("%lld", &t);
		if(t == 0) break;

		ll c_max = -INF;
		ll c_min = 0;
		ll c_sum = 0;
		for(int i=0; i<t; i++)
		{
			scanf("%lld", &n);
			c_sum += n;
			if(c_max < c_sum - c_min) c_max = c_sum - c_min;
			if(c_min > c_sum) c_min = c_sum;
			
		}
		printf("%lld\n", c_max);
	}
}