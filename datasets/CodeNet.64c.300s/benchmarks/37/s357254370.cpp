
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

//1からnまでの自然数の和を返す
int getSum(int n) {
	return (n*(n+1)/2);
}

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int N, ans = 0;
		cin >> N;
		if( N == 0 ) break;

		for(int i = 1; i < N; i++) {
			for(int j = i + 1; j < N; j++) {
				//かならずjのほうが大きい
				if( getSum(j) - getSum( i - 1 ) == N ) ans ++;
			}
		}

		cout << ans << endl;
	}

	//while(1){}
	return 0;
}