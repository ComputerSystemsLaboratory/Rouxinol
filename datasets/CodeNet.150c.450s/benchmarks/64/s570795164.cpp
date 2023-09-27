#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	bool dp[100000];
	bool dp2[100000];
	int a[10000];
	int N,K;
	int b[10000];

	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>a[i];
	}
	cin>>K;
	for(int i=1;i<=K;i++){
		cin>>b[i];
	}

	for(int h=1;h<=K;h++){
	memset(dp,false,sizeof(dp));
	dp[0]=true;
	for(int i=1;i<=N;i++){
		for(int j=0;j<=b[h];j++){
			if(dp[j]==true){
				dp2[j+a[i]]=true;
			}
		}
		for(int j=0;j<=b[h];j++){
			if(dp2[j]==true){
				dp[j]=true;
			}
		}
		memset(dp2,false,sizeof(dp2));
	}

	cout<<(dp[b[h]]?"yes":"no")<<endl;

	}

	return 0;
}