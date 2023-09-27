#include <iostream>
#include <vector>
#include <string.h>

#define pb push_back
#define MAX 110

using namespace std;

int ans;
int num[MAX];
int n;
long long dp[MAX][22];

//long long enzan(int sum,int i);

int main(void)
{
	int i1,i2;
	long long c;

	cin>>n;
	vector<int> v(n);
	for(i1=0;i1<n-1;i1++){
		cin>>num[i1];
	}
	cin>>ans;
	memset(dp,0,sizeof(dp));
	dp[0][num[0]]=1;
	//cout<<enzan(0,0)<<endl;

	for(i1=1;i1<n;i1++){
		for(i2=0;i2<=20;i2++){
			if(dp[i1-1][i2]!=0){
				if((i2+num[i1])<=20) dp[i1][i2+num[i1]]+=dp[i1-1][i2];
				if((i2-num[i1])>=0) dp[i1][i2-num[i1]]+=dp[i1-1][i2];
			}
		}
	}

	/*for(i1=0;i1<n;i1++){
		for(i2=1;i2<=20;i2++){
			cout<<dp[i1][i2]<<" ";
		}
		cout<<endl;
	}*/

	cout<<dp[n-2][ans]<<endl;
	return 0;

}

/*long long enzan(int sum,int i)
{
	if(i==n){
		if(sum==ans) return 1;
		else return 0;
	}
	if(0>sum || sum>20) return 0;
	if(dp[sum][i]!=0) return dp[sum][i];

	long long c=0; 
	c+=enzan(sum+num[i+1],i+1);
	c+=enzan(sum-num[i+1],i+1);
	dp[sum][i]=c;
	return c;
}*/