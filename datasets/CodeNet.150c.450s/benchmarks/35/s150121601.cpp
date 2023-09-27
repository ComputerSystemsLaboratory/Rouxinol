//O(n^2)
#include<stdio.h>
#include<math.h>

long long n,rui[10000];

long long max( long long x,long long y ){
	if( x > y )
		return x;
	return y;
}

int main()
{
	long long i,j;
	long long ans;
	while( scanf("%lld",&n) != EOF )
	{
		if( n == 0 )break;
		ans = -10000000000;
		for( i = 0;i < n;i++ ){
			scanf("%lld",rui+i );
			if( i )rui[i] += rui[i-1];
		}
		
		for( i = 0;i < n;i++ ){
			for( j = i;j < n;j++ ){
				if( i )
					ans = max( ans, rui[j]-rui[i-1] );
				else
					ans = max( ans,rui[j] );
			}
		}
		
		printf("%lld\n",ans);
	}
	return 0;
}