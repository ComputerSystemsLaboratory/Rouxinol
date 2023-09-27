
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


//
int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1){
		vector<char> conv_from, conv_to;
		int n,m;
		char tmp;
		//変換表を取得する
		cin >> n;
		if(n == 0) break;
		for(int i = 0; i < n; i++) {
			cin >> tmp;
			conv_from.push_back(tmp);
			cin >> tmp;
			conv_to.push_back(tmp);
		}
		//文字列を取得する
		cin >> m;
		for(int i = 0; i < m; i++ ){
			cin >> tmp;
			for(int j = 0; j < n; j++){
				if(tmp == conv_from.at(j)) {
					tmp = conv_to.at(j);
					break;
				}
			}
			cout << tmp;
		}
		cout << endl;
	}

	//while(1){}
	return 0;
}