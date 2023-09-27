
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <algorithm>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	int N, M;
	bool s = true;
	vector<string> ID;
	string message[] = {
		"Opened by ",
		"Closed by ",
		"Unknown "
	};
	cin >> N;

	for(int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		ID.push_back( tmp );
	}
	cin >> M;
	for(int i = 0; i < M; i++) {
		string tmp;
		cin >> tmp;
		bool flg = false;
		for(int j = 0; j < N; j++) {
			if( tmp == ID.at(j) ) {
				flg = true;
				s = 1 - s;
				cout << message[s] << tmp << endl;
				break;
			}
		}
		if( flg == false ) {
			cout << message[2] << tmp << endl;
		}
	}

	//while(1){}
	return 0;
}