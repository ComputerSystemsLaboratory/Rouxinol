#include<iostream>

using namespace std;

struct numTuple
{
	int _x;
	int _y;
	void convert() {
		if (_x > _y) {
			int temp = _x;
			_x = _y;
			_y = temp;
		}
	}

	void input(int xInput,int yInput) {
		_x = xInput;
		_y = yInput;
	}

	void printTuple() {
		cout << _x << ' ' << _y << endl;
	}
};

int main() {
	int x=-1, y=-1;
	numTuple num;

	while ((cin >> x >> y) && !(x == 0 && y == 0)) {
		num.input(x,y);
		num.convert();
		num.printTuple();
	}

	//system("pause");
	return 0;
}