#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	
	int N;
	
	int a[1000];
	
	long long int ans;
	
	long long int num1[21][101];
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N; j++){
			for(int k = 0; k <= 20; k++){
				num1[k][j] = 0;
			}
		}
		num1[a[0]][0] = 1;
		for(int j = 1; j <= i; j++){
			for(int k = 0; k <= 20; k++){
				if(k + a[j] <= 20){
					num1[k + a[j]][j] += num1[k][j - 1];
				}
				if(k - a[j] >= 0){
					num1[k - a[j]][j] += num1[k][j - 1];
				}
			}
		}
		num1[a[i + 1]][i + 1] = 1;
		for(int j = i + 2; j < N; j++){
			for(int k = 0; k <= 20; k++){
				if(k + a[j] <= 20){
					num1[k + a[j]][j] += num1[k][j - 1];
				}
				if(k - a[j] >= 0){
					num1[k - a[j]][j] += num1[k][j - 1];
				}
			}
		}
		/*
		for(int j = 0; j < N; j++){
			for(int k = 0; k <= 20; k++){
				printf("%lld ", num1[k][j]);
			}
			printf("\n");
		}
		*/
		ans = 0;
		for(int j = 0; j <= 20; j++){
			ans += num1[j][i] * num1[j][N - 1];
		}
	}
	printf("%lld\n", ans);
	
	return 0;
}