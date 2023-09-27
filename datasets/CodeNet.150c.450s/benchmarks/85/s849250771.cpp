#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 1e18;
using namespace std;

typedef pair<long long int, long long int> P;

int main(){
	
	int n;
	cin >> n;
	
	int A[200], B[200];
	
	for(int i = 0; i < n; i++){
		cin >> A[i] >> B[i];
	}
	
	long long int DP[101][101] = {};
	for(int i = 1; i < n; i++){
		for(int j = 0; j + i < n; j++){
			DP[j][j + i] = INF;
			for(int k = 0; k < i; k++){
				DP[j][j + i] = min(DP[j][j + i], DP[j][j + k] + DP[j + k + 1][j + i] + A[j] * B[j + k] * B[j + i]);
				//cout << DP[j][j + k] + DP[j + k + 1][j + i] + A[j + k] * B[j + k] * B[j + k + 1] << " ";
			}
			//cout << DP[j][j + i] << " ";
		}
		//cout << endl;
	}
	
	cout << DP[0][n - 1] << endl;
	
	return 0;
}
