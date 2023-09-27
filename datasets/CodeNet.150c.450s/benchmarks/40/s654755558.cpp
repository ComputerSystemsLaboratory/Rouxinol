#include <iostream>
using namespace std;
class Dice{
private:
	int top, front, right, left, back, bottom;
	void rollNorth(){
		int temp = back;
		back = top;
		top = front;
		front = bottom;
		bottom = temp;
	}
	void rollSouth(){
		int temp = back;
		back = bottom;
		bottom = front;
		front = top;
		top = temp;
	}
	void rollEast(){
		int temp = right;
		right = top;
		top = left;
		left = bottom;
		bottom = temp;
	}
	void rollWest(){
		int temp = left;
		left = top;
		top = right;
		right = bottom;
		bottom = temp;
	}
	void rollChoice(char dir){
		switch (dir)
		{
		case 'E':
			rollEast();
			break;
		case 'N':
			rollNorth();
			break;
		case 'W':
			rollWest();
			break;
		case 'S':
			rollSouth();
			break;
		}
	}
public:

	void readLabel(){
		cin >> top >> front >> right >> left >> back >> bottom;
	}
	void roll(){
		char dir;
		while (cin >> dir){
			rollChoice(dir);
		}
	}
	int getTop(){
		return top;
	}
};
int main(){
	Dice dice;
	dice.readLabel();
	dice.roll();
	cout << dice.getTop() << endl;
	return 0;
}