#include <bits/stdc++.h>
using namespace std;

void dice_roll( int *dice, char i){
	if( i == 'W'){
		int tmp = dice[0];
		dice[0] = dice[1];
		dice[1] = dice[5];
		dice[5] = dice[4];
		dice[4] = tmp;
	}
	if( i == 'S'){
		int tmp = dice[0];
		dice[0] = dice[4];
		dice[4] = dice[5];
		dice[5] = dice[1];
		dice[1] = tmp;
	}
	if( i == 'D'){
		int tmp = dice[0];
		dice[0] = dice[3];
		dice[3] = dice[5];
		dice[5] = dice[2];
		dice[2] = tmp;
	}
	if( i == 'A'){
		int tmp = dice[0];
		dice[0] = dice[2];
		dice[2] = dice[5];
		dice[5] = dice[3];
		dice[3] = tmp;
	}
	if( i == 'd'){
		int tmp = dice[1];
		dice[1] = dice[2];
		dice[2] = dice[4];
		dice[4] = dice[3];
		dice[3] = tmp;
	}
}


int main(){
	/*
		0
	3	1	2	4
		5
	*/
	int dice[6];
	for(int i = 0; i < 6; i++) cin >> dice[i];
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int u,f;
		cin >> u>>f;
		int cnt = 0;
		while(u != dice[0]){
			dice_roll(dice, 'W');
			cnt++;
			if(cnt == 4 )break;
		}
		if(cnt ==4){
			cnt = 0;
			while(u != dice[0]){
				dice_roll(dice, 'D');
			}
			while(f != dice[1]){
				dice_roll(dice, 'd');
			}
			cout << dice[2] << endl;
		}
		else {
			cnt = 0;
			while(f != dice[1]){
				dice_roll(dice, 'd');
			}
			cout << dice[2] << endl;
		}
	}
	return 0;
}


