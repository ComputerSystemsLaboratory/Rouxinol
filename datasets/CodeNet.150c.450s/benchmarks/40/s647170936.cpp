#include <iostream>
#include <string>
using namespace std;

struct Dice{
	int num[6];
};

int move(struct Dice dice, string str){
	int store[6];

	for(int i=0;i<str.length();i++){
		for(int j=0;j<6;j++){
			store[j] = dice.num[j];
		}
		switch(str[i]){
		case 'N':
			dice.num[0] = store[1];
			dice.num[1] = store[5];
			dice.num[5] = store[4];
			dice.num[4] = store[0];
			break;
		case 'E':
			dice.num[0] = store[3];
			dice.num[3] = store[5];
			dice.num[5] = store[2];
			dice.num[2] = store[0];
			break;
		case 'S':
			dice.num[0] = store[4];
			dice.num[4] = store[5];
			dice.num[5] = store[1];
			dice.num[1] = store[0];
			break;
		case 'W':
			dice.num[0] = store[2];
			dice.num[2] = store[5];
			dice.num[5] = store[3];
			dice.num[3] = store[0];
			break;
		}
	}

	return dice.num[0];
}

int main(){
	struct Dice dice;
	string str;

	for(int i=0;i<6;i++){
		cin>>dice.num[i];
	}
	cin>>str;

	cout<<move(dice, str)<<endl;
	return 0;
}