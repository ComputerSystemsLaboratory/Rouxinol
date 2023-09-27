#include<iostream>
#include<string>
using namespace std;

int main()
{
	int Dice[6];
	string direction;
	int tmp;
	int i;
	
	for(i=0;i<6;i++){
		cin >> Dice[i];
	}
	cin >> direction;
	
	for(i=0;direction[i]!='\0';i++){
		if(direction[i]=='E'){
			tmp=Dice[0];
			Dice[0]=Dice[3];
			Dice[3]=Dice[5];
			Dice[5]=Dice[2];
			Dice[2]=tmp;
		}
		else if(direction[i]=='W'){
			tmp=Dice[0];
			Dice[0]=Dice[2];
			Dice[2]=Dice[5];
			Dice[5]=Dice[3];
			Dice[3]=tmp;
		}
		else if(direction[i]=='N'){
			tmp=Dice[0];
			Dice[0]=Dice[1];
			Dice[1]=Dice[5];
			Dice[5]=Dice[4];
			Dice[4]=tmp;
		}
		else if(direction[i]=='S'){
			tmp=Dice[0];
			Dice[0]=Dice[4];
			Dice[4]=Dice[5];
			Dice[5]=Dice[1];
			Dice[1]=tmp;
		}
	}
	
	cout << Dice[0] << endl;
	
	return 0;
}