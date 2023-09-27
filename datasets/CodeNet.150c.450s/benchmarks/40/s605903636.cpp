#include <bits/stdc++.h>
using namespace std;

int main(){
	/*
		0
	3	1	2	4
		5
	*/
	int dice[6];
	for(int i = 0; i < 6; i++) cin >> dice[i];
	string input;
	cin >> input;
	for(int i = 0; i < input.length(); i++){
		if( input[i] == 'N'){
			int tmp = dice[0];
			dice[0] = dice[1];
			dice[1] = dice[5];
			dice[5] = dice[4];
			dice[4] = tmp;
		}
		if( input[i] == 'S'){
			int tmp = dice[0];
			dice[0] = dice[4];
			dice[4] = dice[5];
			dice[5] = dice[1];
			dice[1] = tmp;
		}
		if( input[i] == 'E'){
			int tmp = dice[0];
			dice[0] = dice[3];
			dice[3] = dice[5];
			dice[5] = dice[2];
			dice[2] = tmp;
		}
		if( input[i] == 'W'){
			int tmp = dice[0];
			dice[0] = dice[2];
			dice[2] = dice[5];
			dice[5] = dice[3];
			dice[3] = tmp;
		}
	}
	cout << dice[0] << endl;
	return 0;
}
