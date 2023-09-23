#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int n[100];
unsigned long long  DP[100][21];
int main(){
int N, s;

  cin >> N;

   for(int i = 0; i < N; i++){
	   cin >> n[i];
   }

   DP[0][n[0]] = 1;
   for(int i = 1; i < N-1; i++){
    for(int j = 0; j < 21; j++){
		if(DP[i-1][j] >= 1 && j+n[i] <= 20){
			DP[i][j+n[i]] += DP[i-1][j];
		}

		if(DP[i-1][j] >= 1 && j-n[i] >= 0){
			DP[i][j-n[i]] += DP[i-1][j];
		}
	}
   }

   cout << DP[N-2][n[N-1]] << endl;
	return 0;
}