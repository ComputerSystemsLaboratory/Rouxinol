
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		/*
			numは販売した券の総数
			divは優勝者への投票数
		*/
		int N, M, P, div, num = 0, ans;
		cin >> N >> M >> P;

		if( N == 0 && M == 0 && P == 0) break;

		for(int i = 0; i < N; i++) {
			int tmp;
			cin >> tmp;
			num += tmp;
			if(M == i + 1) div = tmp; 
		}
		if(div == 0) {
			cout << 0 << endl;
		} else {
			ans = 100 * num;	//総売り上げ
			ans -= P*ans/100;	//控除
			ans /= div;
			cout << ans << endl;
		}

	}

	//while(1){}
	return 0;
}