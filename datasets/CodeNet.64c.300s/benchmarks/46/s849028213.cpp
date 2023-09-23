
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>

using namespace std;

//与えられた数が素数かどうか判定する
int isPrime(unsigned long long int x) {
	if(x == 0) return 0;
	if(x == 1) return 0;

	int flg = 1;
	for(int i = 2; i < (int)sqrt((double)x) + 1; i++) {
		if(x % i == 0) {
			flg = 0;
			break;
		}
	}
	return flg;
}


int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		unsigned long long int a, d, n;
		unsigned long long int ans, tmp;
		int cnt = 0;
		cin >> a >> d >> n;
		tmp = a;
		if( a == 0 && d == 0 && n == 0 ) break;	//終了処理

		//素数を求めるループ
		while(1) {
			if( isPrime(tmp) ) cnt ++;
			if( cnt ==  n ) {
				ans = tmp;
				break;
			}
			tmp += d;
		}

		//出力
		cout << ans << endl;
	}


	
	//while(1){}
	return 0;
}