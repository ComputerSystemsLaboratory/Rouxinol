#include <iostream>
//#include <string>

using namespace std;

class Dice{
private:
	int top, bottom, north, east, west, south;
public:
	void setNumber(){
		int n1, n2, n3, n4, n5, n6;
		cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
		top = n1;
		south = n2;
		east = n3;
		west = n4;
		north = n5;
		bottom = n6;
	}

	void roll(){
		string command;
		cin >> command;
		for(int i = 0; i < command.length(); i++){
			switch(command[i]){
				case 'N': rollNorth(); break;
				case 'E': rollEast(); break;
				case 'W': rollWest(); break;
				case 'S': rollSouth(); break;
			}
		}
	}

	void rollNorth(){
		int tmp = north;
		north = top;
		top = south;
		south = bottom;
		bottom = tmp;
	}

	void rollEast(){
		int tmp = east;
		east = top;
		top = west;
		west = bottom;
		bottom = tmp;
	}

	void rollWest(){
		int tmp = west;
		west = top;
		top = east;
		east = bottom;
		bottom = tmp;
	}

	void rollSouth(){
		int tmp = south;
		south = top;
		top = north;
		north = bottom;
		bottom = tmp;
	}

	void rotateClockwise(){
		int tmp = south;
		south = east;
		east = north;
		north = west;
		west = tmp;
	}

	int getTop(){
		return top;
	}

	int getFront(){
		return south;
	}

	int getRight(){
		return east;
	}
};

int main(){
	Dice dice;
	dice.setNumber();
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int top, front;
		cin >> top >> front;
		while(true){
			if(dice.getTop() == top) break;
			dice.rollNorth();
			if(dice.getTop() == top) break;
			dice.rollEast();
		}
		while(dice.getFront() != front){
			dice.rotateClockwise();
		}
		cout << dice.getRight() << endl;
	}

	return 0;
}