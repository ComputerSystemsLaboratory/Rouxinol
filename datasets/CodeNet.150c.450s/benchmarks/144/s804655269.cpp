#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <string>

using namespace std;

int main(void){
	int N, M, L;
	cin >> N >> M >> L;
	long long matA[100][100]={0};
	long long matB[100][100]={0};
	long long matC[100][100]={0};
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> matA[i][j];
		}
	}
	for(int i=0; i<M; i++){
		for(int j=0; j<L; j++){
			cin >> matB[i][j];
		}
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			for(int k=0; k<L; k++){
				matC[i][k] += matA[i][j]*matB[j][k];
			}
		}
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<L; j++){
			if(j!=0) cout << " ";
			cout << matC[i][j];
		}
		cout<<endl;
	}
	return 0;
}