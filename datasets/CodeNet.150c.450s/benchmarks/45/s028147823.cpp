#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int ll;
ll M,N;
const ll MOD=1e9+7;
ll X[50];
ll ans=1;
int main()
{
	scanf("%lld%lld",&M,&N);
	X[0]=1;
	X[1]=M;
	for(int i=2;i<50;i++)X[i]=(X[i-1]*X[i-1])%MOD;
	for(int i=0;i<50;i++){
		if(N%2==1){
			ans*=X[i+1];
			ans%=MOD;
		}
		N/=2;
	}
	printf("%lld\n",ans);
	return 0;
}