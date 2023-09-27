#include<cstdio>
#include <string.h>
#include<math.h>
#include<algorithm>


using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
const int INF=1001001001;
int A,B;
int N;
long long int DP[20][20];


int main(){
	while(1){
	memset(DP,0,sizeof(DP));
	scanf("%d %d",&A,&B);
	if(A==0&&B==0)break;
	scanf("%d",&N);

	rep(i,N){
		int a,b;
		scanf("%d %d",&a,&b);
		DP[a-1][b-1]=-1;
	}
	rep(i,A){
		rep(j,B){
			if(DP[i][j]==-1)continue;
			if(i==0&&j==0){DP[0][0]=1;continue;}
			if(i==0){if(DP[i][j-1]>0)DP[i][j]=1;continue;}
			else if(DP[i-1][j]!=-1)DP[i][j]+=DP[i-1][j];
			if(j==0){if(DP[i-1][j]>0)DP[i][j]=1;continue;}
			else if(DP[i][j-1]!=-1)DP[i][j]+=DP[i][j-1];
		}
	}
	printf("%lld\n",DP[A-1][B-1]);
	
	}
}