#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	long long int a,b,n,x,y;
while(1){	a=0;
	b=0;
	scanf("%lld",&n);
	if(n==0) break;
	for(long long int i=0;i<n;i++){
		scanf("%lld %lld",&x,&y);
		if(x>y) {a+=(x+y);}
		if(x<y) {b+=(x+y);}
		if(x==y){
			a+=x;
			b+=y;
		}
	}
	printf("%lld %lld\n",a,b);}
	return 0;
}