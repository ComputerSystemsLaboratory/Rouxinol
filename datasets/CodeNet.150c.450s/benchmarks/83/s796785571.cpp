#include<iostream>
using namespace std;

int main(){
 	int N, W;
	cin >> N >> W;

	if((N>0 || N>101) && (W<0 || W>10001)){
		return -1;
	}
	
	int v[N],w[N];
	for(int i=0; i<N; i++){
		cin >> v[i] >> w[i];

	if((v[i]<0 || v[i]>1001) && (w[i] <0 || w[i]>1001)){
		return -1;
	}
	}

	int DP[N+1][W+1];
	
	for(int j=0; j<=W; j++)
		DP[0][j] = 0;
	
	for(int i=1; i<=N; i++)
		for(int j=0; j<=W; j++)
			if(j<w[i-1])
				DP[i][j] = DP[i-1][j];
			else{
				if(DP[i-1][j]>DP[i-1][j-w[i-1]]+v[i-1])
					DP[i][j] = DP[i-1][j];
				else
					DP[i][j] = DP[i-1][j-w[i-1]]+v[i-1];
			}
			
		
	cout << DP[N][W] <<endl;

	return 0;
}