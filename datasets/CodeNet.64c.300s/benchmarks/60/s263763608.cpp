#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;

int main(void)
{
	int i,j,a,b,n,x[41],y[41];
	int dp[17][17];
	while(1) {
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		scanf("%d",&n);	
		for(i=1;i<=b;i++) {
			for(j=1;j<=a;j++) {
				dp[i][j]=0;
			}
		}
		for(i=1;i<=n;i++) {
			scanf("%d %d",&x[i],&y[i]);
			dp[y[i]][x[i]]=-1;
		}
		dp[1][1]=1;
		for(i=1;i<=b;i++) {
			for(j=1;j<=a;j++) {
				if(dp[i][j]!=0 && dp[i][j]!=-1) {
					if(dp[i+1][j]!=-1 && i+1<=b)
						dp[i+1][j]+=dp[i][j];
					if(dp[i][j+1]!=-1 && j+1<=a)
						dp[i][j+1]+=dp[i][j];
				}
			}
		}
/**///	for(i=1;i<=b;i++) {
/**///		for(j=1;j<=a;j++) {
/**///			printf("%5d",dp[i][j]);
/**///		}
/**///		printf("\n");
/**///	}
/**///	printf("\n");
/**///	for(i=b;i>=1;i--) {
/**///		for(j=1;j<=a;j++) {
/**///			printf("%5d",dp[i][j]);
/**///		}
/**///		printf("\n");
/**///	}
		printf("%d\n",dp[b][a]);
	}
	return 0;
}
/*	while(1) {
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		scanf("%d",&n);	
		for(i=0;i<=b;i++) {
			for(j=0;j<=a;j++) {
				dp[i][j]=0;
			}
		}
		for(i=0;i<n;i++) {
			scanf("%d %d",&x[i],&y[i]);
			dp[y[i]][x[i]]=-1;
		}
		dp[1][1]=1;
		for(i=1;i<=b;i++) {
			for(j=1;j<=a;j++) {
				if(dp[i][j]!=-1) {
					if(dp[i-1][j]==-1) dp[i][j]=dp[i][j-1];
					if(dp[i][j-1]==-1) dp[i][j]=dp[i-1][j];
					if(dp[i-1][j]==-1 && dp[i][j-1]==-1)dp[i][j]=0;
					else dp[i][j]=dp[i-1][j]+dp[i][j-1];
				}
			}
		}
		for(i=0;i<=b;i++) {
			for(j=0;j<=a;j++) {
				printf("%3d",dp[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(i=b;i>=0;i--) {
			for(j=0;j<=a;j++) {
				printf("%3d",dp[i][j]);
			}
			printf("\n");
		}
		printf("%d\n",dp[b][a]);
		break;
		
	}
	return 0;
}*/
		