#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,n;
	long long int sum;
	scanf("%d",&n);
	sum=1;
	for(i=2;i<=n;i++) sum=sum*i;
	printf("%lld\n",sum);
	return 0;
}