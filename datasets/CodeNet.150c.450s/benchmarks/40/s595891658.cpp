#include <iostream>
using namespace std;
class Dice{
private:
	int dice[6];
/*	int direction[4][6]={
		{3,1,0,5,4,2},
		{1,5,2,3,0,4},
		{4,0,2,3,5,1},
		{2,1,5,0,4,3}};
*/
	int direction[4][6];
public:
	Dice(int dice[6]);
	void rotate(string cmd);
	void rotate(char cmd);
	int getTop();
};

Dice::Dice(int dice[6]){
	for(int i=0;i<6;i++){
		this->dice[i]=dice[i];
	}
	int tmp[4][6]={
		{3,1,0,5,4,2},
		{1,5,2,3,0,4},
		{4,0,2,3,5,1},
		{2,1,5,0,4,3}};
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			direction[i][j]=tmp[i][j];
		}
	}
}

void Dice::rotate(string cmd){
	int length=cmd.length();
	for(int i=0;i<length;i++){
		rotate(cmd[i]);
	}
}

void Dice::rotate(char cmd){
	int tmp[6];
	int index;
	switch(cmd){
		case 'E':index=0;break;
		case 'N':index=1;break;
		case 'S':index=2;break;
		case 'W':index=3;break;
		default:return;
	}
	for(int i=0;i<6;i++){
		tmp[i]=dice[i];
	}
	for(int i=0;i<6;i++){
		dice[i]=tmp[direction[index][i]];
	}
}

int Dice::getTop(){
	return dice[0];
}

int main(){
	int tmp[6];
	for(int i=0;i<6;i++){
		cin>>tmp[i];
	}
	Dice dice(tmp);
	string cmd;
	cin>>cmd;
	dice.rotate(cmd);
	cout<<dice.getTop()<<endl;
	return 0;
}