
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int n;					//審判の人数
		int ans = 0, max, min, temp;
		vector<int> points;		//点数を取得する

		cin >> n;	//以降のループ回数を取得する
		if( n == 0 ) break;	//ループ終了処理
		
		//点数を取得する
		for(int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			points.push_back(tmp);
			ans += tmp;
		}

		//最大値を取得する
		temp = -1;
		for(int i = 0; i < n; i++) 
			if(temp < points.at(i)) temp = points.at(i);
		max = temp;
		//最小値を取得する
		for(int i = 0; i < n; i++)
			if(temp > points.at(i)) temp = points.at(i);
		min = temp;

		//答えから最大値・最小値を一つづつ除く
		ans -= (max + min);
		//平均を取得する
		ans /= (n - 2);


		//出力
		cout << ans << endl;
	}

	//while(1){}
	return 0;
}