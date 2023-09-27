// 2013/11/10 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int n[100];
	for(int i=0; i<N; i++){
		cin >> n[i];
	}

	long long DP[99][21];
	for(int i=0; i<N-1; i++){
		for(int j=0; j<21; j++){
			DP[i][j] = 0;
		}
	}

	DP[0][n[0]] = 1;

	for(int i=1; i<N-1; i++){
		for(int j=0; j<21; j++){
			if(j-n[i]>=0){
				DP[i][j] += DP[i-1][j-n[i]];
			}
			if(j+n[i]<=20){
				DP[i][j] += DP[i-1][j+n[i]];
			}
		}
	}

	cout << DP[N-2][n[N-1]] << endl;

	return 0;
}