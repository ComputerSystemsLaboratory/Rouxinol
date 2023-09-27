#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

struct Dice{
	int top;
	int front;
	int right;
	int left;
	int back;
	int bottom;
};
void roll_n(Dice &dice)
{
	int a = dice.top;
	dice.top = dice.front;
	dice.front = dice.bottom;
	dice.bottom = dice.back;
	dice.back = a;
}
void roll_e(Dice &dice)
{
	int a = dice.top;
	dice.top = dice.left;
	dice.left = dice.bottom;
	dice.bottom = dice.right;
	dice.right = a;
}
void roll_w(Dice &dice)
{
	int a = dice.top;
	dice.top = dice.right;
	dice.right = dice.bottom;
	dice.bottom = dice.left;
	dice.left = a;
}
void roll_s(Dice &dice)
{
	int a = dice.top;
	dice.top = dice.back;
	dice.back = dice.bottom;
	dice.bottom = dice.front;
	dice.front = a;
}
void roll_top(Dice &dice, int top)
{
	if(top == dice.top){
	
	}
	else if(top == dice.front){
		roll_n(dice);
	}
	else if(top == dice.right){
		roll_w(dice);
	}
	else if(top == dice.left){
		roll_e(dice);
	}
	else if(top == dice.back){
		roll_s(dice);
	}
	else{
		roll_e(dice);
		roll_e(dice);
	}
}
void roll_front(Dice &dice, int front)
{
	if(front == dice.front){
	
	}
	else if(front == dice.right){
		roll_top(dice, front);
		roll_s(dice);
	}
	else if(front == dice.left){
		roll_top(dice, front);
		roll_s(dice);
	}
	else{
		roll_top(dice, front);
		roll_s(dice);
	}
}
int main(void)
{	
	Dice dice;
	
	cin >> dice.top >> dice.front >> dice.right >> dice.left >> dice.back >> dice.bottom;
	
	int q;
	cin >> q;
	
	for(int i = 0; i < q; i++){
		int top;
		int front;
		cin >> top >> front;
		
		roll_front(dice, front);
		roll_top(dice, top);
		
		cout << dice.right << endl;
	}

	return 0;
}