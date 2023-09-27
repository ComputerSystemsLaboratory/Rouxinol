
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int n, r, p, c;
		vector<int> cards;	//山札を意味するvector

		cin >> n >> r;		//山の枚数とシャッフル回数を取得する

		for(int i = n; i > 0; i --)
			cards.push_back(i);

		if( n == 0 && r == 0) break;

		for(int i = 0; i < r; i++) {
			cin >> p >> c;
			vector<int> tmp;	//抜き取った札を一時的に記憶するvector

			//c枚の札を抜き取る
			for(int j = 0; j < c; j++)  
				tmp.push_back(cards.at(p - 1 + j));

			//p-1枚の札を下に移す
			for(int j = p - 2; j >= 0; j--)	
				cards.at(j + c) = cards.at(j);

			//c枚の札を上に戻す
			for(int j = 0; j < c; j++) 
				cards.at(j) = tmp.at(j);
		}

		//答えの出力
		cout << cards.at(0) << endl;
	}

	//while(1){}
	return 0;
}