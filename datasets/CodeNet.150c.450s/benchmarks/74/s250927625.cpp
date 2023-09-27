#include<iostream>
using namespace std;

static int DP[21][50001];
	
int main(){
	int n,m;
	cin>>n>>m;

	int c[20];
	for(int i=0;i<m;i++)
		cin>>c[i];
		
	const int IMF=50000;

	for(int i=0;i<=m;i++)
		DP[i][0]=0;
	for(int j=0;j<=n;j++)
		DP[0][j]=IMF;

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j<c[i-1])
				DP[i][j]=DP[i-1][j];
			else{
				if(DP[i-1][j]<DP[i][j-c[i-1]]+1)
					DP[i][j]=DP[i-1][j];
				else
					DP[i][j]=DP[i][j-c[i-1]]+1;
			}
		}
	}
	
	cout<<DP[m][n]<<endl;
	
	return 0;
}

	