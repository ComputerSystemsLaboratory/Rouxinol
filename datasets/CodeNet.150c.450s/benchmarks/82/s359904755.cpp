#include <iostream>
#include <string>
using namespace std;

struct Dice{
	int num[6];
};

void move(struct Dice *dice, string str){
	int store[6];

	for(int i=0;i<str.length();i++){
		for(int j=0;j<6;j++){
			store[j] = (*dice).num[j];
		}
		switch(str[i]){
		case 'N':
			(*dice).num[0] = store[1];
			(*dice).num[1] = store[5];
			(*dice).num[5] = store[4];
			(*dice).num[4] = store[0];
			break;
		case 'E':
			(*dice).num[0] = store[3];
			(*dice).num[3] = store[5];
			(*dice).num[5] = store[2];
			(*dice).num[2] = store[0];
			break;
		case 'S':
			(*dice).num[0] = store[4];
			(*dice).num[4] = store[5];
			(*dice).num[5] = store[1];
			(*dice).num[1] = store[0];
			break;
		case 'W':
			(*dice).num[0] = store[2];
			(*dice).num[2] = store[5];
			(*dice).num[5] = store[3];
			(*dice).num[3] = store[0];
			break;
		}
	}
}

int main(){
	struct Dice dice;
	int q, front, top;
	for(int i=0;i<6;i++){
		cin>>dice.num[i];
	}

	cin>>q;
	for(int i=0;i<q;i++){
		cin>>top>>front;
		int x;

		for(int j=0;j<6;j++){
			if(dice.num[j] == top)   x = j;
		}

		switch(x){
		case 0:
			break;
		case 1:
			move(&dice, "N");
			break;
		case 2:
			move(&dice, "W");
			break;
		case 3:
			move(&dice, "E");
			break;
		case 4:
			move(&dice, "S");
			break;
		case 5:
			move(&dice, "NN");
			break;
		}

		for(int j=1;j<5;j++){
			if(dice.num[j] == front) x = j;
		}

		switch(x){
		case 1:
			x = 2;
			break;
		case 2:
			x = 4;
			break;
		case 3:
			x = 1;
			break;
		case 4:
			x = 3;
			break;
		}

		cout<<dice.num[x]<<endl;
	}
	return 0;
}