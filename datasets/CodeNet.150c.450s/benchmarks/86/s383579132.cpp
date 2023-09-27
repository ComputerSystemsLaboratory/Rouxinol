#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int N,M,P,X[1000];
	int i;
	int sum,ans,winner;
	while(1){
		sum = 0;
		cin >> N >> M >> P;
		if(N == 0 && M == 0 && P == 0){
			break;
		}
		for(i = 1 ; i <= N ; i++){
		cin >> X[i];
			sum += X[i];
			if(M == i){
				winner = X[i];
			}
		}
			if(winner == 0){
				cout << 0 << endl;
		}
			else{
				ans=(100*sum-(100*sum*P/100))/winner;
					cout << ans << endl;
				}
				}
				return 0;
			}