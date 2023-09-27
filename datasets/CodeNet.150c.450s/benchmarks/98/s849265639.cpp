
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
//	FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		vector<vector<int>> cards;
		int pts[] = {0,0};	//太郎と花子の合計点数
		int ans[2] = {999,999};	//交換するカードの値
		int num[2];

		cin >> num[0] >> num[1];
		if( num[0] == 0 && num[1] == 0) break;

		//各人のカードの合計点数・カード情報を取得する
		for(int i = 0; i < 2; i++) {
			vector<int> newcards;
			for(int j = 0; j < num[i]; j++) {
				int s;
				cin >> s;
				newcards.push_back(s);
				pts[i] += s;
			}
			cards.push_back(newcards);
		}

		//交換の全通りを調べる
		for(int i = 0; i < num[0]; i++) {
			for(int j = 0; j < num[1]; j++) {
				//交換後の点数を調べる
				int tmp[2];
				tmp[0] = pts[0] - cards.at(0).at(i) + cards.at(1).at(j);
				tmp[1] = pts[1] + cards.at(0).at(i) - cards.at(1).at(j);
				if(tmp[0] == tmp[1]) {
					if(ans[0] + ans[1] > cards.at(0).at(i) + cards.at(1).at(j)) {
						ans[0] = cards.at(0).at(i);
						ans[1] = cards.at(1).at(j);
					}
				}
			}
		}

		if(ans[0] == 999 && ans[1] == 999) {
			cout << -1 << endl;
		} else {
			cout << ans[0] << " " << ans[1] << endl;
		}

	}

	//while(1){}
	return 0;
}