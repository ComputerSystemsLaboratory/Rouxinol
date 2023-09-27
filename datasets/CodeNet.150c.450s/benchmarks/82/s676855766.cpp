#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Dice{
public:
	long top, front, right, left, back, bottom;
	Dice(long top, long front);
	void north();
	void south();
	void west();
	void east();
	void showTop();
	void guessRightFromTopAndFront(long top, long front, long *right);
};

Dice::Dice(long top, long front)
{
	long r = 0;
	this->top = top;
	this->front = front;
	if (top == 1){
		if (front == 2) r = 3;
		else if (front == 5) r = 4;
		else if (front == 3) r = 5;
		else if (front == 4) r = 2;
	}
	else if (top == 6){
		if (front == 2) r = 4;
		else if (front == 5) r = 3;
		else if (front == 3) r = 2;
		else if (front == 4) r = 5;
	}
	else if (top == 2){
		if (front == 1) r = 4;
		else if (front == 6) r = 3;
		else if (front == 3) r = 1;
		else if (front == 4) r = 6;
	}
	else if (top == 5){
		if (front == 1) r = 3;
		else if (front == 6) r = 4;
		else if (front == 3) r = 6;
		else if (front == 4) r = 1;
	}
	else if (top == 3){
		if (front == 1) r = 2;
		else if (front == 6) r = 5;
		else if (front == 2) r = 6;
		else if (front == 5) r = 1;
	}
	else if (top == 4){
		if (front == 1) r = 5;
		else if (front == 6) r = 2;
		else if (front == 2) r = 1;
		else if (front == 5) r = 6;
	}
	this->right = r;
	this->left = 7 - r;
	this->back = 7 - front;
	this->bottom = 7 - top;
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

void Dice::guessRightFromTopAndFront(long top, long front, long *right){
	if (top == 1){
		if (front == 2) *right =  3;
		else if (front == 5) *right =  4;
		else if (front == 3) *right =  5;
		else if (front == 4) *right =  2;
	}
	else if (top == 6){
		if (front == 2) *right =  4;
		else if (front == 5) *right =  3;
		else if (front == 3) *right =  2;
		else if (front == 4) *right =  5;
	}
	else if (top == 2){
		if (front == 1) *right =  4;
		else if (front == 6) *right =  3;
		else if (front == 3) *right =  1;
		else if (front == 4) *right =  6;
	}
	else if (top == 5){
		if (front == 1) *right =  3;
		else if (front == 6) *right =  4;
		else if (front == 3) *right =  6;
		else if (front == 4) *right =  1;
	}
	else if (top == 3){
		if (front == 1) *right =  2;
		else if (front == 6) *right =  5;
		else if (front == 2) *right =  6;
		else if (front == 5) *right =  1;
	}
	else if (top == 4){
		if (front == 1) *right =  5;
		else if (front == 6) *right =  2;
		else if (front == 2) *right =  1;
		else if (front == 5) *right =  6;
	}
	return;
}

int main(){
	vector<long> roll(6, 0);
	Dice *d;
	long right;
	for (long i = 0; i < 6; i++) cin >> roll[i];
	d = new Dice(roll[0], roll[1]);
	long q;
	cin >> q;
	for (long i = 0; i < q; i++){
		long a = 0, b = 0;
		cin >> a >> b;
		long ra = 0, rb = 0;
		for (long j = 0; j < 6; j++){
			if (a == roll[j]) ra = j + 1;
			if (b == roll[j]) rb = j + 1;
		}
		d->guessRightFromTopAndFront(ra, rb, &right);
		cout << roll[right - 1] << endl;
	}
	delete d;
	return 0;
}