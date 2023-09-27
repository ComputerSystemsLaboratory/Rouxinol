#include<iostream>
#define max 1000010
using namespace std;

bool isp[max];
int ans[max]={};

void sieve(){
	for(int i=0;i<max;i++)isp[i]=true;
	for(int i=2;i<max;i++){
		if(isp[i]){
			ans[i]++;
			for(int j=2*i;j<max;j+=i)isp[j]=false;
		}
	}
	for(int i=1;i<max;i++)ans[i]+=ans[i-1];
	return;
}

int main()
{
	int n;

	sieve();
	while(cin>>n)cout<<ans[n]<<endl;

	return 0;
}