
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);
	
	int N;
	cin >> N;
	for(int cnt = 0; cnt < N; cnt++) {
		string s[2];
		int num[2][4];
		for(int i = 0; i < 2; i++)
			for(int j = 0; j < 4; j ++)
				num[i][j] = 0;
		stringstream ans;
		cin >> s[0] >> s[1];

		//数値解析
		for(int i = 0; i < 2; i++) {

			//千の位
			int tmp = s[i].find("m",0);
			if(tmp == string::npos)		num[i][3] = 0;
			else if(tmp == 0)			num[i][3] = 1;
			else num[i][3] = s[i].at(0) - '0' ;

			//百の位
			tmp = s[i].find("c",0);
			if(tmp == string::npos)		num[i][2] = 0;
			else if( tmp == 0 || s[i].at( tmp - 1 ) > '9' ) num[i][2] = 1;
			else num[i][2] = s[i].at(tmp - 1) - '0' ;

			//十の位
			tmp = s[i].find("x",0);
			if(tmp == string::npos)		num[i][1] = 0;
			else if( tmp == 0 || s[i].at( tmp - 1 ) > '9' ) num[i][1] = 1;
			else num[i][1] = s[i].at( tmp - 1 ) - '0';

			//一の位
			tmp = s[i].find("i",0);
			if(tmp == string::npos)		num[i][0] = 0;
			else if( tmp == 0 || s[i].at( tmp - 1 ) > '9' ) num[i][0] = 1;
			else num[i][0] = s[i].at( tmp - 1 ) - '0';

		}

		int p[2];
		for(int i = 0; i < 2; i++) p[i] = num[i][3]*1000 + num[i][2]*100 + num[i][1]*10 + num[i][0];
		
		int ans_i = p[0] + p[1];

		//答えの文字列の生成
		if( ans_i / 1000 > 1) {
			ans << ans_i / 1000;
			ans << "m";
		} else if(ans_i / 1000 == 1) {
			ans << "m";
		}
		ans_i -= ans_i/1000*1000;
		//答えの文字列の生成
		if( ans_i / 100 > 1) {
			ans << ans_i / 100;
			ans << "c";
		} else if(ans_i / 100 == 1) {
			ans << "c";
		}
		ans_i -= ans_i/100*100;
		//答えの文字列の生成
		if( ans_i / 10 > 1) {
			ans << ans_i / 10;
			ans << "x";
		} else if(ans_i / 10 == 1) {
			ans << "x";
		}
		ans_i -= ans_i/10*10;
		//答えの文字列の生成
		if( ans_i / 1 > 1) {
			ans << ans_i / 1;
			ans << "i";
		} else if(ans_i / 1 == 1) {
			ans << "i";
		}
		
		cout << ans.str() << endl;

	}

	
	//while(1){}
	return 0;
}