#include<iostream>
using namespace std;
int prime[200],dprime[100];
int dp[2000001],ddp[2000001];
int main(){
	int a=1,b=2,count=1,dcount=1;
	prime[0]=1,dprime[0]=1;
	while(true){
		a+=b;
		b++;
		if(prime[count-1]+a>=1000000)
			break;
		if((prime[count-1]+a)%2==1){
			dprime[dcount]=prime[count-1]+a;
			dcount++;
		}
		prime[count]=prime[count-1]+a;
		count++;
	}
	for(int i=0;i<=2000000;i++)
			dp[i]=i%4+i/4;
	for(int i=0;i<=999999;i++){
		for(int j=0;j<count;j++)
			dp[i+prime[j]]=min(dp[i+prime[j]],dp[i]+1);
	}
	for(int i=0;i<=2000000;i++)
			ddp[i]=i%35+i/35;
	for(int i=0;i<=999999;i++){
		for(int j=0;j<dcount;j++)
			ddp[i+dprime[j]]=min(ddp[i+dprime[j]],ddp[i]+1);
	}
	int n;
	while(true){
		cin>>n;
		if(n==0)
			break;
		cout<<dp[n]<<" "<<ddp[n]<<endl;
	}
	return 0;
}