#include<iostream>
using namespace std;

int main(){

	int  N;
	int  W;
	int vi[1000];
	int wi[1000];
	int DP[1001][1001];

	cin>>N>>W;

	for(int i=0;i<N;i++){
		cin>>vi[i]>>wi[i];
	}

	for(int j=0;j<=W;j++){
		DP[N][j]=0;
	}
	
	for(int i=N-1;i>=0;i--){
		for(int j=0;j<=W;j++){
			if(j<wi[i]){
				DP[i][j]=DP[i+1][j];
			}else{
				if(DP[i+1][j]>DP[i+1][j-wi[i]]+vi[i]){
					DP[i][j]=DP[i+1][j];
				}else{
					DP[i][j]=DP[i+1][j-wi[i]]+vi[i];
				}
			}
		}
	}

	cout<<DP[0][W]<<endl;
	
	return 0;
}


	