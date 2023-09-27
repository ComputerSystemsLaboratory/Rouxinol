#include <iostream>
#include <string.h>

#define MAX 17

using namespace std;

int dp[MAX][MAX];

int main(void)
{
	int a,b,n;
	int i1,i2;
	int x,y;
	while(1){
		cin>>a>>b;
		if(a+b==0) break;
		cin>>n;

		memset(dp,0,sizeof(dp));
		for(i1=1;i1<=b;i1++){
			for(i2=1;i2<=a;i2++){ 
				if(i1==1 || i2==1) dp[i1][i2]=1;
			}
		}

		for(i1=0;i1<n;i1++){
			cin>>x>>y;
			if(x==1) {
				for(i2=y;i2<=b;i2++) dp[i2][1]=0;
			}
			else if(y==1) {
				for(i2=x;i2<=a;i2++) dp[1][i2]=0;
			} 
			else dp[y][x]=-1;
		}

		for(i1=2;i1<=b;i1++){
			for(i2=2;i2<=a;i2++){
				if(dp[i1][i2]==-1) dp[i1][i2]=0;
				else {
					dp[i1][i2]=dp[i1-1][i2]+dp[i1][i2-1];
				}
			}
		}

	/*for(i1=1;i1<=b;i1++){
			for(i2=1;i2<=a;i2++){
				cout<<dp[i1][i2]<<" ";
			}
			cout<<endl;
		}*/

		cout<<dp[b][a]<<endl;
	}
	return 0;
} 