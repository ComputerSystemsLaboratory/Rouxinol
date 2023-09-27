#include <iostream>
#include <vector>
using namespace std;

//?????????????????¨????§???????-------------------
typedef struct{
	int top;
	int front;
	int right;
	int left;
	int back;
	int bottom;
}Dice;
//---------------------------------------
void roll_n(Dice *dice);
void roll_e(Dice *dice);
void roll_s(Dice *dice);
void roll_w(Dice *dice);

//---------------------------------------

int main(void)
{
	Dice dice;
	string rolling;
	
	cin >> dice.top;
	cin >> dice.front;
	cin >> dice.right;
	cin >> dice.left;
	cin >> dice.back;
	cin >> dice.bottom;
	
	cin >> rolling;
	
	for(int i = 0; i < rolling.size(); i++){
	
		switch(rolling[i]){
		case 'N' :
			 roll_n(&dice);
			 break;
		case 'E' :
			 roll_e(&dice);
			 break;
		case 'S' :
			 roll_s(&dice);
			 break;
		case 'W' :
			 roll_w(&dice);
			 break;
		}
	}
	
	cout << dice.top << endl;
	
	
	return 0;
	
}
//-------------------------------------
void roll_n(Dice *dice)
{
	Dice copy = *dice;
	
	dice -> back   = copy.top;
	dice -> bottom = copy.back;
	dice -> front  = copy.bottom;
	dice -> top    = copy.front;
}

//--------------------------------------
void roll_e(Dice *dice)
{
	Dice copy = *dice;
	
	dice -> top    = copy.left;
	dice -> right  = copy.top;
	dice -> bottom = copy.right;
	dice -> left   = copy.bottom;
}

//--------------------------------------
void roll_s(Dice *dice)
{
	Dice copy = *dice;
	
	dice -> front  = copy.top;
	dice -> bottom = copy.front;
	dice -> back   = copy.bottom;
	dice -> top    = copy.back;
}

//--------------------------------------
void roll_w(Dice *dice)
{
	Dice copy = *dice;
	
	dice -> left   = copy.top;
	dice -> bottom = copy.left;
	dice -> right  = copy.bottom;
	dice -> top    = copy.right;
}
/*
Top  [0]
Front [1]
Right [2]
Left [3]
Back [4]
Bottom [5]
*/