#pragma  warning (disable:4996)
#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#define MAX 1000000
using namespace std;
int amount[MAX];
int vis[MAX];
int prime[MAX];
int main(){
	//memset(vis, 0, sizeof(vis));
	//memset(prime, 0, sizeof(prime));
	fill(prime, prime + MAX, 1);
	prime[0] = prime[1] = 0;
	for (int i = 2; i*i <= MAX; i++){
		if (prime[i]){

			for (int j = i + i; j <= MAX; j += i){

				prime[j] = 0;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i <= MAX; i++){
		if (prime[i]){
			sum++;
		}
		amount[i] = sum;
	}
	int n;
	while (cin >> n){
		cout << amount[n] << endl;
	}
	return 0;
}