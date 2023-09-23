#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long long Min,Max,sum=0,n,m;
	scanf("%lld%lld",&n,&Max);
	Min=sum=Max;
	for(int i=1;i<n;i++){
		scanf("%lld",&m);
		if(m>Max) Max=m;
		if(m<Min) Min=m;
		sum+=m;
	}
	printf("%lld %lld %lld\n",Min,Max,sum);
	return 0;
}
