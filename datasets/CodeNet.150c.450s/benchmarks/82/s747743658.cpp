#include <iostream>
#include <string>

using namespace std;
class Dice{
public:
int dice[6];

int getAns(){return dice[0];}

int getAns2(){return dice[1];}

int getAns3(){return dice[2];}

void input(){
	for (int i = 0;i < 6;i++ ){
		cin >> dice[i];
	}
}

void moveS(){
	int dice2[6];
	int index_list[6] = {4,0,2,3,5,1};
	for (int i = 0 ; i < 6 ; i++ ){
		int idx = index_list[i];
		dice2[i] = dice[idx];
	}
	for (int i = 0 ; i < 6 ; ++i){
		dice[i] = dice2[i];
	}
}


void moveW(){
	int dice2[6];
	int index_list[6] = {2,1,5,0,4,3};
	for (int i = 0 ; i < 6 ; i++ ){
		int idx = index_list[i];
		dice2[i] = dice[idx];
	}
	for (int i = 0 ; i < 6 ; ++i ){
		dice[i] = dice2[i];
	}
}

void moveX(){
	int dice2[6];
	int index_list[6] = {0,3,1,4,2,5};
	for (int i = 0 ; i < 6 ; i++ ){
		int idx = index_list[i];
		dice2[i] = dice[idx];
	}
	for(int i = 0 ; i < 6 ; i++ ){
		dice[i] = dice2[i];
	}
}


};

int main(){
	Dice dice;
	dice.input();
	int p,a,b;
	cin >> p;
	for (int i = 0 ; i < p ; i++ ){
		cin >> a >> b;
		for (int j = 0 ; j < 4 ; j++ ){
			if(dice.getAns() == a)break;
			dice.moveS();
		}

		for (int k = 0 ; k < 4 ; k++ ){
			if (dice.getAns() == a)break;
			dice.moveW();
		}

		for (int l = 0 ; l < 4 ; l++ ){
			if (dice.getAns2() == b)break;
			dice.moveX();
			}
		cout << dice.getAns3() << endl;
		}
return 0;
}

	