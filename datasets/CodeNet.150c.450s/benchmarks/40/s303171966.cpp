#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
typedef vector<int> Dice;
//---------------------------------------
void roll_n(Dice &dice);
void roll_e(Dice &dice);
void roll_s(Dice &dice);
void roll_w(Dice &dice);

//---------------------------------------

int main(void)
{
	Dice dice;
	int num;
	string rolling;
	
	for(int i = 0; i < 6; i++){
		cin >> num;
		dice.push_back(num);
	}
	cin >> rolling;
	
	for(int i = 0; i < rolling.size(); i++){
	
		switch(rolling[i]){
		case 'N' :
			 roll_n(dice);
			 break;
		case 'E' :
			 roll_e(dice);
			 break;
		case 'S' :
			 roll_s(dice);
			 break;
		case 'W' :
			 roll_w(dice);
			 break;
		}
	}
	
	cout << dice[0] << endl;
	
	
	return 0;
	
}
//-------------------------------------
void roll_n(Dice &dice)
{
	Dice copy = dice;
	
	dice[4] = copy[0];
	dice[5] = copy[4];
	dice[1] = copy[5];
	dice[0] = copy[1];
}

//--------------------------------------
void roll_e(Dice &dice)
{
	Dice copy = dice;
	
	dice[0] = copy[3];
	dice[2] = copy[0];
	dice[5] = copy[2];
	dice[3] = copy[5];
}

//--------------------------------------
void roll_s(Dice &dice)
{
	Dice copy = dice;
	
	dice[1] = copy[0];
	dice[5] = copy[1];
	dice[4] = copy[5];
	dice[0] = copy[4];
}

//--------------------------------------
void roll_w(Dice &dice)
{
	Dice copy = dice;
	
	dice[3] = copy[0];
	dice[5] = copy[3];
	dice[2] = copy[5];
	dice[0] = copy[2];
}
/*
Top  [0]
Front [1]
Right [2]
Left [3]
Back [4]
Bottom [5]
*/