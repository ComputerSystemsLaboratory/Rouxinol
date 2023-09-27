#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
long long memo[200][21];
long long dp(int n);

int main(void){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int t;
		cin >> t;
		a.push_back(t);
	}

	cout << dp(n) << endl;

	return 0;
}

long long dp(int n){

	for(int i=0; i<n; i++){
		for(int j=0; j<=20; j++){
			memo[0][i] = 0;
		}
	}
	memo[0][a[0]] = 1;

	for(int i=1; i<n-1; i++){
		for(int j=0; j<=20; j++){
			int add = j + a[i];
			int sub = j - a[i];
			if(add >= 0 && add <= 20) memo[i][add] += memo[i-1][j];
			if(sub >= 0 && sub <= 20) memo[i][sub] += memo[i-1][j];
		}
	}

	/*
	for(int i=0; i<n-1; i++){
		for(int j=0; j<=20; j++){
			printf("%lld ", memo[i][j]);
		}
		puts("");
	}
	*/

	return memo[n-2][a[n-1]];
}