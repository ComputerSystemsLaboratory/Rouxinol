#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1000000
using namespace std;

int tetra[200];
int dp[MAX];
int dp2[MAX];

int main(void){
	int n;
	memset(dp,MAX,sizeof(dp));
	memset(dp2,MAX,sizeof(dp2));
	dp[0]=dp2[0]=0;
	for(int i=1;i<200;i++)
		tetra[i]=i*(i+1)*(i+2)/6;
	for(int i=1;i<200;i++){
		for(int j=0;j<MAX;j++){
			if(j+tetra[i]>=MAX)
				continue;
			dp[j+tetra[i]]=min(dp[j+tetra[i]],dp[j]+1);
			if(tetra[i]%2)
				dp2[j+tetra[i]]=min(dp2[j+tetra[i]],dp2[j]+1);
		}
	}
	while(cin >>n,n)
		cout << dp[n] <<" " << dp2[n] << endl;
	return 0;
}