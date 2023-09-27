#include <iostream>
#include <string>
using namespace std;

class Dice
{
public:
	long top, front, right, left, back, bottom;
	Dice(long top, long front, long right, long left, long back, long bottom);
	void north();
	void south();
	void west();
	void east();
	void showTop();
};

Dice::Dice(long top, long front, long right, long left, long back, long bottom){
	this->top = top;
	this->front = front;
	this->right = right;
	this->left = left;
	this->back = back;
	this->bottom = bottom;
}

void Dice::north(){
	long sv[6];
	sv[0] = this->front;
	sv[1] = this->bottom;
	sv[2] = this->right;
	sv[3] = this->left;
	sv[4] = this->top;
	sv[5] = this->back;

	this->top = sv[0];
	this->front = sv[1];
	this->right = sv[2];
	this->left = sv[3];
	this->back = sv[4];
	this->bottom = sv[5];
}

void Dice::south(){
	long sv[6];
	sv[0] = this->back;
	sv[1] = this->top;
	sv[2] = this->right;
	sv[3] = this->left;
	sv[4] = this->bottom;
	sv[5] = this->front;

	this->top = sv[0];
	this->front = sv[1];
	this->right = sv[2];
	this->left = sv[3];
	this->back = sv[4];
	this->bottom = sv[5];
}

void Dice::west(){
	long sv[6];
	sv[0] = this->right;
	sv[1] = this->front;
	sv[2] = this->bottom;
	sv[3] = this->top;
	sv[4] = this->back;
	sv[5] = this->left;

	this->top = sv[0];
	this->front = sv[1];
	this->right = sv[2];
	this->left = sv[3];
	this->back = sv[4];
	this->bottom = sv[5];
}

void Dice::east(){
	long sv[6];
	sv[0] = this->left;
	sv[1] = this->front;
	sv[2] = this->top;
	sv[3] = this->bottom;
	sv[4] = this->back;
	sv[5] = this->right;

	this->top = sv[0];
	this->front = sv[1];
	this->right = sv[2];
	this->left = sv[3];
	this->back = sv[4];
	this->bottom = sv[5];
}

void Dice::showTop(){
	cout << this->top << endl;
}

int main(){
	long roll[6];
	Dice *dice;
	for (long i = 0; i < 6; i++){
		cin >> roll[i];
	}
	//dice = new Dice(1, 2, 4, 8, 16, 32);
	dice = new Dice(roll[0], roll[1], roll[2], roll[3], roll[4], roll[5]);
	string s;
	cin >> s;
	//s = "EESWN";
	for (long i = 0; i < s.size(); i++){
		if (s[i] == 'N') dice->north();
		else if (s[i] == 'W') dice->west();
		else if (s[i] == 'S') dice->south();
		else if (s[i] == 'E') dice->east();
	}
	dice->showTop();
	return 0;
}