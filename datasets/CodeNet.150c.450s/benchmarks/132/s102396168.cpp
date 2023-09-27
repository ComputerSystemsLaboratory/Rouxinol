
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int n, p, bowl;
		vector<int> cand;

		cin >> n >> p;
		bowl = p;

		//終了処理
		if( n == 0 && p == 0) break;

		for(int i = 0; i < n; i++)
			cand.push_back(0);	//各候補者が持っている石の数
		
		int j = 0;

		while(1) {

			if(bowl > 0) {
				//椀の中に石が残っているとき
				cand.at(j) ++;
				bowl --;

				if( bowl == 0 && cand.at(j) == p ) {
					cout << j << endl;
					break;
				}

			} else if(bowl == 0) {
				//椀の中に石が残っていないとき
				bowl += cand.at(j);
				cand.at(j) = 0;
			}

			j ++;	//順番を回す。円形であることに注意
			j = j % n;
		}
		

	}

	//while(1){}
	return 0;
}