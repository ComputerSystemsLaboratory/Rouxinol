#include<cstdio>
#include<cstring>
#define N 1000

int LCS[N+1][N+1];

int LCSLength(char X[], int m, char Y[], int n){
	for(int i=0;i<=m;i++)
		LCS[i][n] = 0;
	for(int j=0;j<=n;j++)
		LCS[m][j] = 0;
	for(int i=m-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			LCS[i][j] = LCS[i+1][j+1];
			if(X[i] == Y[j])
				LCS[i][j]++;
			if(LCS[i][j+1] > LCS[i][j])
				LCS[i][j] = LCS[i][j+1];
			if(LCS[i+1][j] > LCS[i][j])
				LCS[i][j] = LCS[i+1][j];
		}
	}
	return LCS[0][0];
}

int main(){
	char X[N+1],Y[N+1];
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		scanf("%s %s",X,Y);
		int m = strlen(X);
		int n = strlen(Y);
		printf("%d\n",LCSLength(X,m,Y,n));
	}
	return 0;
}