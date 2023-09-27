#include<iostream>
#include<string>
using namespace std;

int Rotation(string Direction){
	int Dice[6];
	for(int i = 0; i < 6; i++){
		Dice[i] = i;
	}
	for(int i = 0; i < Direction.size(); i++){
		if(Direction[i] == 'N'){
			int M = Dice[0];
			Dice[0] = Dice[1];
			Dice[1] = Dice[5];
			Dice[5] = Dice[4];
			Dice[4] = M;
		}
		if(Direction[i] == 'W'){
			int M = Dice[0];
			Dice[0] = Dice[2];
			Dice[2] = Dice[5];
			Dice[5] = Dice[3];
			Dice[3] = M;
		}
		if(Direction[i] == 'S'){
			int M = Dice[0];
			Dice[0] = Dice[4];
			Dice[4] = Dice[5];
			Dice[5] = Dice[1];
			Dice[1] = M;
		}
		if(Direction[i] == 'E'){
			int M = Dice[0];
			Dice[0] = Dice[3];
			Dice[3] = Dice[5];
			Dice[5] = Dice[2];
			Dice[2] = M;
		}
	}
	return Dice[0];
}

int main(){
	//?????????????????°???????????????
	int Surface[6];
	for(int i = 0; i < 6; i++) cin >> Surface[i];
	//?????¢?????????????????????
	string Direction;
	cin >> Direction;
	//?????¢?????????????¨??????????
	int Top;
	Top = Rotation(Direction);
	//?????¢???????????????
	cout << Surface[Top] << endl;
}